#!/usr/local/bin/python

# blink, forever

# required packages
import RPi.GPIO as GPIO
import time

# set GPIO mode (physical numbering)
GPIO.setmode(GPIO.BOARD)

pin = 7

# set pin as an output
GPIO.setup(pin, GPIO.OUT)

def blink(pin):

	# turn the LED on
	print "ON"
	GPIO.output(pin,True)

	# wait
	time.sleep(1.0)

	# turn the LED off
	print "OFF"
	GPIO.output(pin,False)

	# wait
	time.sleep(1.0)


try:
	while True:		# main loop
		blink(pin)
except KeyboardInterrupt:
	pass			# catch when script is interrupted
finally:
	GPIO.cleanup()	# reset used ports back to input mode
