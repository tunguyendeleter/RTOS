
import speech_recognition
import pyttsx3
from datetime import datetime, date
today = date.today()
now = datetime.now()
time = 0
while True:
        
    robot_ear = speech_recognition.Recognizer()
    with speech_recognition.Microphone() as mic: 
        print("Robot: I'm listening")
        audio = robot_ear .listen(mic, timeout = 3, phrase_time_limit=3)   
    print("Robot:...")

    try:
        you = robot_ear.recognize_google(audio)
    except:
        you = ""
    print("you: " + you)

    if you == "":
        robot_brain = "I can't hear you, try again"
        time += 1
        if time == 3:
            break
    elif "hello" in you:
        robot_brain = "hello tu"
    elif "today" in you:
        robot_brain = today.strftime("%B %d, %Y")
    elif "time" in you:
        robot_brain = now.strftime("%H hours %M minutes %S seconds")
    elif "you" in you:
        robot_brain = "I'am fine thank you and you"
    if "bye" in you:
        robot_mouth = pyttsx3.init()
        robot_mouth.say( "goodbye, see you next time")
        robot_mouth.runAndWait()
        break
    robot_mouth = pyttsx3.init()
    robot_mouth.say(robot_brain)
    robot_mouth.runAndWait()
    print("Robot:",robot_brain)


   

print("Robot:",robot_brain)


