import string
import random

chars = string.ascii_letters + string.string.digits + string.printable

  pw = str()
  number = int(input("Bitte gebe die Länge des Passworts an: "))
  for _ in range(number):
      pw = ''.join(secrets.choice(chars) for _ in range(number))
  print("Das Passwort" , repr(pw) , "wurde in die Datei 'passwords.txt' eingetragen")
  with open('passwords.txt' , 'a') as f:
      f.write(pw)
      f.write("\n")
