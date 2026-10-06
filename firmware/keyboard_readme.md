# brokiepad

![brokiepad](image replace me!)

A 3x3 ortholinear macropad with an OLED display and 9 addressable RGB LEDs, built on the Seeed Studio XIAO RP2040.

* Keyboard Maintainer: [husnainxali](https://github.com/husnainxali)
* Hardware Supported: Brokiepad custom PCB, Seeed Studio XIAO RP2040
* Hardware Availability: [husnainxali/hackpad](https://github.com/husnainxali/hackpad)

Make example for this keyboard (after setting up your build environment):

    qmk compile -kb brokiepad -km default

Flashing example for this keyboard:

    qmk flash -kb brokiepad -km default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 2 ways:

* **Physical reset button**: Double-tap the reset button on the XIAO RP2040 to enter UF2 bootloader mode.
* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (top-left key) and plug in the keyboard.
