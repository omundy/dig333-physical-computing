# analog-test-all-pins.py - Owen Mundy
# Print reading from each analog-in pin on a BeagleBone 
# with a short delay between each
# This example is in the public domain

import os,time
i = 1

while(True):
	os.system("cat /sys/bus/platform/devices/tsc/ain" + str(i))
	print " - AIN" + str(i-1)
	if i==7: 
		i=1
		time.sleep(.5)
		print "------"
	else:
		i+=1	
	time.sleep(.1)
