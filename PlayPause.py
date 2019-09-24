
import serial
import time
import pyautogui

ArduinoSerial = serial.Serial('COM4', 9600)
time.sleep(2)

while 1:

    performAction = str(ArduinoSerial.readline())
    print performAction

    if 'Play/Pause' in performAction:
        pyautogui.typewrite(['playpause'], 0.2)
