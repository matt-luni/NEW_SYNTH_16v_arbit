# NEW_SYNTH_16v_arbit

This is a 16 voice, polyphonic synth made from an old (music) keyboard, Teensy and Teendy audio board.

It used the MCP23017 I2C port expander as an input for the keyboard's diode matrix to free up some inputs on the teensy. Eventually all other inputs on the teensy will be used up with physical controls (buttons, linear / rotary potentiometers, rotary encoders, etc).

Currently using arbituary wave forms made by [Adventure Kid](https://www.adventurekid.se/) and resampled to 256+1 samples by [Datanoise](https://github.com/DatanoiseTV). 
