  
import speech_recognition as sr 
import pyttsx3

sample_rate = 48000

chunk_size = 2048

r = sr.Recognizer()

with sr.Microphone() as source: 
    r.adjust_for_ambient_noise(source) 
    print ("Say Something")

    audio = r.listen(source) 
    text = r.recognize_google(audio) 
    print ("you said: " + text )


engine = pyttsx3.init()
engine.say(text)
engine.runAndWait()
