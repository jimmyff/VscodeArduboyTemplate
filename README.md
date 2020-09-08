# VS Code Arduboy Template

The purpose of this project is to assist in setting up an arduboy project in VS code with fully working intellisense. Shortcuts will allow you to execute builds and running the project will launch ProjectABE emulator.

If you are configuring your system for the first time, first follow the 'First time installation' section at the bottom of this document.

---

## Project setup

 1. Export this repostiory and place it in your sketchbook folder.
 2. Rename the folder to your project name and rename the .ino file to be exactly the same.
 3. Open the 'Command Palette' (CRL/CMD+Shift+P or F1) and select 'Arduino: Initalize', select the Arduboy board.
 4. Modify the newly generated `.vscode/aruino.json` & `.vscode/c_app_properties.json` files:

file: `.vscode/c_app_properties.json`

```js
    "includePath": [
    // leave your existing paths here
    // ...

    // add this (dont forget comma on line above)
    "../libraries"
    ]
```

File `.vscode/aruino.json`

```js
{   // leave your existing config here
    // ...

    // add this (dont forget comma on line above)
    "output": "build"
}
```

---

## Shortcuts

* Verify: Alt+Cmd+R or Alt+Ctrl+R
* Build: Alt+Cmd+U or Alt+Ctrl+U
* Debug: F5
* Run: Crl+F5

---

## First time installation

### System setup

* Install Arduino IDE (Note, on Windows you must use the ZIP version, the WindowsApp version does not work with VS Code.)
* Install [ProjectABE](https://github.com/felipemanga/ProjectABE/releases) & make sure that this is available on your PATH

### Install VS Code extensions

1. vsciot-vscode.vscode-arduino
2. ms-vscode.cpptools

### Configure VS Code extensions

1. Go through Arduino options and add `arduino.path` `arduino.commandPath`
1. Add the following settings into your Vs code User Settings:

```json
{
    "arduino.additionalUrls": "https://arduboy.github.io/board-support/package_arduboy_index.json",
    "arduino.logLevel": "info",
    "arduino.enableUSBDetection": true,
    "C_Cpp.intelliSenseEngine": "Tag Parser"

}
```

* `arduino.additionalUrls` is to include the Arduboy files
* `C_Cpp.intelliSenseEngine` will make the intellisense work (so you can CRL+click in to code from external packages, autocomplete etc)

### Install libraries and board

1. Open 'Command Pallette' and select 'Arduino: Library Manager', search for arduboy and install all librarys
2. Open 'Command Pallette' and select 'Arduino: Board Manager', search for arduboy and install the board.

Your system should now be setup, proceed with the 'Project Setup' steps at the top of this document.

---

Author: _jimmyff / Feystag_
