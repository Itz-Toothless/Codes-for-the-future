import string
import random

chars = string.ascii_letters + string.digits + string.printable  # Definition der String-Argumente

number = int(input("Bitte gebe die Länge des Passworts an: "))  
"""
Bittet den Nutzer um die Eingabe eines Integers, welche die Länge des Passworts darstellt.

Empfehlung für die Länge eines Passwortes: Mindestens 12 Zeichen
"""
pw = ''.join(random.choice(chars) for _ in range(number))
print(f"Passwort: '{pw}'")
