To flash using qmk run:
```
qmk flash --keyboard crkbd --keymap vitarb -bl dfu-split-left
qmk flash --keyboard crkbd --keymap vitarb -bl dfu-split-right 
```

or using make:
```
make crkbd:vitarb:dfu-split-left
make crkbd:vitarb:dfu-split-left
```
