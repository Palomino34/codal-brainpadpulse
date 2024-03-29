/*
The MIT License (MIT)

Copyright (c) 2017 Lancaster University.

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the "Software"),
to deal in the Software without restriction, including without limitation
the rights to use, copy, modify, merge, publish, distribute, sublicense,
and/or sell copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
DEALINGS IN THE SOFTWARE.
*/

/**
  * Class definition for MicroBit NEXT IO.
  * Represents a collection of all I/O pins on the device.
  */

#include "CodalConfig.h"
#include "BrainPadIO.h"

using namespace codal;

/**
  * Constructor.
  *
  * Create a representation of all given I/O pins on the edge connector
  *
  * Accepts a sequence of unique ID's used to distinguish events raised
  * by MicroBitPin instances on the default EventModel.
  */
BrainPadIO::BrainPadIO() :
    scl (ID_PIN_SCL, PB_6, PIN_CAPABILITY_AD),
    sda (ID_PIN_SDA, PB_7, PIN_CAPABILITY_AD),
    temperaturePin (ID_PIN_TEMP_SENSOR, PB_0, PIN_CAPABILITY_AD),
    lightPin (ID_PIN_LIGHT_SENSOR, PB_1, PIN_CAPABILITY_AD),
    buttonA (ID_PIN_BUTTON_A, PC_13, PIN_CAPABILITY_DIGITAL),
    buttonB (ID_PIN_BUTTON_B, PB_7, PIN_CAPABILITY_DIGITAL),
    // buttonLeft (ID_PIN_BUTTON_LEFT, PA_15, PIN_CAPABILITY_DIGITAL),
    // buttonRight (ID_PIN_BUTTON_RIGHT, PC_13, PIN_CAPABILITY_DIGITAL),
    ledGreen (ID_PIN_LED_GREEN, PC_8, PIN_CAPABILITY_AD),
    ledBlue (ID_PIN_LED_BLUE, PC_6, PIN_CAPABILITY_AD),
    ledRed (ID_PIN_LED_RED, PC_9, PIN_CAPABILITY_AD),
    buzzer (ID_PIN_BUZZER, PB_8, PIN_CAPABILITY_AD),
    interrupt (ID_PIN_INT, PC_14, PIN_CAPABILITY_AD),
    servoOne (ID_PIN_SERVO_ONE, PA_3, PIN_CAPABILITY_AD),
    servoTwo (ID_PIN_SERVO_TWO, PA_0, PIN_CAPABILITY_AD)
{
}
