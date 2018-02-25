#!/usr/local/bin/python

# a basic button script

import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BOARD)

pin = 40

# set pin as input, use optional 
GPIO.setup(pin, GPIO.IN, pull_up_down=GPIO.PUD_UP)

def button(pin):

	# if the button is not pressed
	if (GPIO.input(pin) == False):
		return 1
	else: 
		return 0

try:
	while True:		# main loop
		print button(pin)	# print status of button
		time.sleep(.5)		# pause between loops
except KeyboardInterrupt:
	pass			# when script is interrupted
finally:
	GPIO.cleanup() 	# reset used ports back to input mode


