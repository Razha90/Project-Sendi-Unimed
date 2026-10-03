# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

**Belajar Cepat** is a Unity 6 (6000.4.7f1) educational mobile app targeting Android. It teaches a subject (currently "Algoritma & Pemrograman Dasar" and related joint/anatomy topics) through three modes: reading material (materi), watching videos, and taking quizzes. The app name and content can be swapped by replacing the JSON data files and scene assets.

## Unity Build Commands

All builds are done from within the Unity Editor or via Unity's CLI. There is no separate build script in this repo — use **File > Build Settings** in the Editor, or the existing build outputs in `build/` (Windows) and `output-android/` (Android APK).

To open in Unity: open Unity Hub and add `D:\unity\game\Project-Sendi-Unimed` as a project (Unity 6000.4.7f1).

## Architecture

### Scenes (`Assets/Scenes/`)
Six scenes, each self-contained:
| Scene | Purpose |
|---|---|
| `start-menu` | Main entry point / splash |
| `play-menu` | Hub that links to materi, video, soal |
| `materi` | Reading material viewer |
| `video` | Video player |
| `soal` | Quiz |
| `profil-pengembang` | Developer credits |

Scene navigation uses `LevelManager.ChangeScene(sceneName)` which delegates to the `SceneTransition` singleton (animated fade). `GoBack()` uses a one-level static history.

### Persistent Singletons
Two `DontDestroyOnLoad` singletons survive scene transitions:
- **`SettingsManager`** — Audio Mixer control (MusicVol / SFXVol exposed parameters), settings panel UI, and the single `sfxSource` used by every other script via `SettingsManager.Instance.PlayClickSound()` / `PlaySFX(clip)`.
- **`SceneTransition`** — Animator-driven fade transition between scenes.

Both must exist in the first scene loaded. If a scene is opened directly in the Editor without the singletons, null-ref errors will appear in every script that calls `SettingsManager.Instance`.

### Data Layer (JSON → C# models)
Content is driven by three JSON files in `Assets/Resources/` and `Assets/StreamingAssets/`:

| File | Model | Loaded by |
|---|---|---|
| `data_materi.json` | `RootMateriData` → `MateriData` → `HalamanObject` → `KontenIsi` | `MateriLoader` |
| `data_quiz.json` | `RootQuizData` → `QuizData` → `PertanyaanData` | `QuizLoader` |
| `data_video.json` | `RootVideoData` → `VideoData` | `VideoLoader` |

All loaders use `Resources.Load<TextAsset>()` and `Newtonsoft.Json` (`JsonConvert.DeserializeObject`). The `data_materi.json` model has a typo in the JSON key: `"titile"` (not `"title"`) mapped via `[JsonProperty("titile")]` in `MateriData`.

### Content Key System
`KontenIsi.key` drives dynamic UI instantiation. Supported keys:
- `"title"`, `"paragraph"`, `"text"`, `"teks"` — text prefabs
- `"caption"` — caption prefab
- `"image"` / `"gambar"` — image prefab; `konten.text` is the `Resources.Load<Sprite>()` path
- `"list"` — list prefab

Image sprites must be placed in `Assets/Resources/` and referenced by path without extension.

### Score Persistence
Quiz scores are stored in `PlayerPrefs` with key `"QuizScore_" + quiz.title`. A score of 100 turns the quiz button green.

### AI Familiar Package
`com.cfirz.aifamiliar` (local package at `Packages/com.cfirz.aifamiliar/`) adds an in-editor AI assistant. Configuration and conversation history live in `Assets/AiFamiliarData/`.

## Key Conventions

- All loader scripts follow the same pattern: `Start()` → `MemuatDataJSON()` → `GenerateList*()`. Each generates UI buttons from data and opens an overlay panel when an item is selected.
- Button click sounds must go through `SettingsManager.Instance.PlayClickSound()` — never play audio directly on buttons.
- The `SettingsManager` AudioMixer has two exposed parameters named exactly `"MusicVol"` and `"SFXVol"`. These names must match if the mixer is ever recreated.
- Video files are stored in `Assets/Resources/vid/` and loaded via `Resources.Load<VideoClip>(videoPath)`.
