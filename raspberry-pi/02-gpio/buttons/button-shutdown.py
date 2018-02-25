#!/usr/local/bin/python

# shutdown button script
# 1. uncomment os.system(...) to shutdown
# 2. edit /etc/rc.local to start on boot

import RPi.GPIO as GPIO
import time
import os
GPIO.setmode(GPIO.BOARD)

pin = 40
timer = 0
timeToShutdown = 5

# set pin as input, use optional 
GPIO.setup(pin, GPIO.IN, pull_up_down=GPIO.PUD_UP)

def button(pin):
	# reference global timer var to last between calls
	global timer

	# if the button is not pressed
	if (GPIO.input(pin) == False):
		timer += 1
		if (timer > timeToShutdown):
			timer = 0
			os.system("sudo shutdown -h now")
			return "SHUTTING DOWN NOW"
		else:	
			return timer
	else: 
		# reset timer
		timer = 0
		return timer

try:
	while True:		# main loop
		print button(pin)	# print status of button
		time.sleep(.5)		# pause between loops
except KeyboardInterrupt:
	pass			# when script is interrupted
finally:
	GPIO.cleanup() 	# reset used ports back to input mode


