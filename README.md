# NEW_SYNTH_16v_arbit

This is a 16 voice, polyphonic synth made from an old (music) keyboard, Teensy and Teendy audio board.

Listen to the synth, as written, [here](https://soundcloud.com/matt-luniewski/synth-sound)!

It uses the [MCP23017 I2C port expander](https://www.adafruit.com/product/732) (and the [Adafruit-MCP23017 Library](https://github.com/adafruit/Adafruit-MCP23017-Arduino-Library)) as an input for the keyboard's diode matrix to free up some inputs on the teensy. Eventually all other inputs on the teensy will be used up with physical controls (buttons, linear / rotary potentiometers, rotary encoders, etc).

Currently using arbituary wave forms made by [Adventure Kid](https://www.adventurekid.se/) and resampled to 256+1 samples by [Datanoise](https://github.com/DatanoiseTV). 

Note: In the pictures of the breadboard, there are some black and blue wires between the Teensy and MCP23017s that are no longer being used.
