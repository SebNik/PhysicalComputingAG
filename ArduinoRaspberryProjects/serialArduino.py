#!/usr/bin/pyhton
# readArduino.py 
# thr / 2017-05-18

import serial

def readlineCR(port):
    rv = ""
    while True:
        ch = port.read()
        rv += ch
        if ch=='\r' or ch=='':
            return rv

PORT = '/dev/ttyUSB0'
BAUD = 38400
port = serial.Serial(PORT,BAUD)
    
s = [0,1]
while True:
	read_serial=port.readline()
	print read_serial
