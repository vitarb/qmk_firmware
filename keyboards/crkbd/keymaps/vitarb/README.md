# vitarb Corne keymap

Use branch `master` in `vitarb/qmk_firmware`. The keymap is named `vitarb`.

Branch `mine` is the older pre-rebase branch and should be treated as legacy.

## Build

```bash
git clone --branch master --recurse-submodules https://github.com/vitarb/qmk_firmware.git
cd qmk_firmware
qmk compile --keyboard crkbd --keymap vitarb
```

## Flash Elite-C

Reset one half into bootloader mode, then run the matching command:

```bash
qmk flash --keyboard crkbd --keymap vitarb -bl dfu-split-left
qmk flash --keyboard crkbd --keymap vitarb -bl dfu-split-right
```

## Layer Notes

- Layer 3 `J/K/L`: volume down, volume up, mute.
- Layer 3 `U/I`: previous/next wallpaper.
- Layer 3 `O/P/_`: terminal opacity via `Super+(`/`Super+)`/`Super+%`.
- RGB lighting is intentionally disabled in this keymap.
