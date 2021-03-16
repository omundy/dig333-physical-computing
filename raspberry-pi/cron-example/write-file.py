#!/usr/bin/python

import datetime

file = "write-file-output.txt"
t = datetime.datetime.now().strftime("%Y-%m-%d %H:%M:%S")
# print(t)

# open file in "append" mode, create if doesn't exist
# "w" = write over contents
f = open(file, "a")
f.write(t +"\n")
f.close()

# testing: open and read the file after the appending
# f = open(file, "r")
# print(f.read())
