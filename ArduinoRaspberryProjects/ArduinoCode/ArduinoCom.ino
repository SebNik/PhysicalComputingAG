/* Arduino Serial Communication Sample Sketch 

 2017-05-19 ThR 
 Physical Computing AG / SGH Holzgerlingen
 
*/
float a,b,c; 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
void loop() {
  a = random(10)+5;
  b = random(2)+10;
  c = random(5)+7;
  // put your main code here, to run repeatedly:
  Serial.print(a,4);
  Serial.print(",");
  Serial.print(b,5);
  Serial.print(",");
  Serial.println(c,7);
}


/* 
--------- cut here -----------------
-- Sample Python Code ----
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
------------------- cut here ------------
*/ 
