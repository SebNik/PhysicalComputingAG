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
BAUD =  9600
port = serial.Serial(PORT,BAUD)
    

while True:
#    port.write("\r\nSay something:")
    rcv = readlineCR(port) 
    rcv = rcv.replace('\r','').replace('\n','').replace('\'','').replace('\'','').replace('\'','')
    print((rcv))
