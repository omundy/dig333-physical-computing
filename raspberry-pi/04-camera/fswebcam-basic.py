#!/usr/bin/python

# fswebcam-basic.py
# Capture an image with fswebcam
# 2013 Owen Mundy owenmundy.com

import time,subprocess

# build the command
cmd  = 'fswebcam -r 960x720 -d /dev/video0 -i 0 --jpeg 80 '
cmd += '--title "Hello World!" --font "arial:10" '
cmd += '--line-colour "#FF000000" --banner-colour "#AA000000" '
cmd += time.strftime("~/python_scripts/py-fswebcam/images/p_%Y%m%d_%H%M%S") +'.jpg'

# start process, storing its details (including pid)
cam = subprocess.Popen(cmd, shell=True)

# wait for image to process
time.sleep(7)

# kill the process after it runs
kill = 'kill -9 '+ str(cam.pid)
subprocess.Popen(kill, shell=True)

# run this script every 10 minutes
# crontab -e 
#    */10 * * * * python /home/pi/python_scripts/py-fswebcam/pycapture.py
