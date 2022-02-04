import string
import random

chars = string.ascii_letters + string.digits + string.printable  # Definition der String-Argumente

number = int(input("Bitte gebe die Länge des Passworts an: "))  # Empfehlung für die Länge: Mindestens 8 Zeichen
for _ in range(number):
    pw = ''.join(random.choice(chars) for _ in range(number))
    print(f"Das Passwort '{pw}' wurde in die Datei 'passwords.txt' eingetragen")
    with open('passwords.txt' , 'a') as f:  #  Optional: Speichern des Passwortes in eine Datei
        f.write(pw)
        f.write("\n")
