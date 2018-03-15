
# import lib
import picamera

# create instance of picamera
camera = picamera.PiCamera()

# change the resolution
camera.resolution = (1280, 720)

# take a picture
camera.capture('image.jpg')
