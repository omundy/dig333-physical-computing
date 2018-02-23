# blink, forever

# required packages
import RPi.GPIO as GPIO
import time

# set GPIO mode (physical numbering)
GPIO.setmode(GPIO.BOARD)

# set pin as an output
GPIO.setup(7, GPIO.OUT)

def blink(pin):

	# turn the LED on
	GPIO.output(pin,True)

	# wait
	time.sleep(1.0)

	# turn the LED off
	GPIO.output(7,False)

	# wait
	time.sleep(1.0)


# catch when script is interrupted
try:
	# main loop
	while True:
		print blink(7)
except KeyboardInterrupt:
	pass
finally:
	# reset used ports back to input mode
	GPIO.cleanup()
