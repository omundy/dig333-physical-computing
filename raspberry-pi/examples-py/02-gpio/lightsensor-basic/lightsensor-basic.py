#!/usr/local/bin/python

# credits:
# https://pimylifeup.com/raspberry-pi-light-sensor/
# https://learn.adafruit.com/basic-resistor-sensor-reading-on-raspberry-pi/basic-photocell-reading

# required packages
import RPi.GPIO as GPIO
import time

# set GPIO mode (physical numbering)
GPIO.setmode(GPIO.BOARD)

# define the pin to read
pin7 = 7

# function 
def rc_time (pin):
    count = 0
  
    # set pin as output
    GPIO.setup(pin, GPIO.OUT)
    GPIO.output(pin, GPIO.LOW)

    # wait  
    time.sleep(0.1)

    # change pin back to input
    GPIO.setup(pin, GPIO.IN)
  
    # count until the pin goes high
    while (GPIO.input(pin) == GPIO.LOW):
        count += 1

    return count

# catch when script is interrupted, cleanup correctly
try:
    # main loop
    while True:
        print rc_time(pin7)
except KeyboardInterrupt:
    pass
finally:
    # reset used ports back to input mode
    GPIO.cleanup()

