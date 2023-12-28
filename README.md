# Godot Extention example

Demo of GDExtention + Webkit (WIP)

## Project structure
```
📦 gdextension-example
┣ 📂 demo                         ⬅️ Game example/demo to test the extension (Godot project folder)
┃  ┣ 📂 bin
┃  ┃  ┣ 📜 ...                    ⬅️ Build artifacts
┃  ┃  ┗ 📜 gdexample.gdextension  ⬅️ Extention settings
┃  ┣ 📜 gd_example.svg            ⬅️ Icon of node of the extension
┃  ┣ 📜 icon.svg
┃  ┗ 📜 main.tscn                 
┣ 📂 godot-cpp                    ⬅️ C++ bindings
┣ 📂 src                          ⬅️ Source code of the extension we are building
┃  ┣ 📜 register_types.cpp
┃  ┣ 📜 register_types.h
┃  ┣ 📜 gdexample.cpp
┃  ┗ 📜 gdexample.h                      
┗ 📜 SConstruct                   ⬅️ SCons build settings
```

## MacOS development

### Install
Install [Vulkan SDK](https://sdk.lunarg.com/sdk/download/latest/mac/vulkan-sdk.dmg)

```sh
brew install scons
```

### Build degug
```sh
scons platform=macos arch=x86_64
scons platform=macos arch=arm64
```

### Build release
```sh
scons platform=macos arch=x86_64 target=template_release
scons platform=macos arch=arm64 target=template_release
```

## Extras

### Clean build cache

```sh
rm -rf bin
rm -rf .scon*
```