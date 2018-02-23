
# blink, forever

# required packages
import RPi.GPIO as GPIO  
import time

# set GPIO mode (physical numbering)
GPIO.setmode(GPIO.BOARD)

def blink(pin):

	# set pin 7 as an output
	 GPIO.setup(7, GPIO.OUT)  

	GPIO.output(pin, GPIO.LOW)

    # wait  
    time.sleep(0.1)

	# turn the LED on and off 
	GPIO.output(7,True)
	 
	    # wait  
    time.sleep(0.1)

	GPIO.output(7,False)  


# cleanup
 GPIO.cleanup()
