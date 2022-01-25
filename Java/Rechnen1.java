public class Rechnen {
	public static void main(String[] args) {
		/* 
			Initialisierung der Variablen a und b als Floats. 
			(Dieser Datentyp wird für die Darstellung einer reellen Zahl mit der Größe von 4 Byte (32 Bit) benutzt.)
			Alternativ können die Variablen a und b als Double initialisiert werden. 
			(Dieser Datentyp wird für die Darstellung einer reellen Zahl mit der Größe von 8 Byte (64 Bit) benutzt.)
			
			Schaut in Rechnen2 für den Code, welcher double verwendet
		*/
		float a, b;
		a = 0.35f;
		b = 5;
		String formattedString = String.format("%.02f", a / b).replace(",", ".");
		System.out.print("Addition: ");
		System.out.println(a + b); // Gibt 5.35 aus
		System.out.print("Subtraktion: ");
		System.out.println(b - a); // Gibt 4.65 aus
		System.out.print("Multiplikation: ");
		System.out.println(a * b);
		System.out.print("Division: ");
		System.out.println(formattedString);
		System.out.print("Modulo: ");
		System.out.println(a % b);
		/* BEACHTUNG!! 
		
		Wenn es sich um einen Float handelt und Ihr eine Kommazahl verwenden möchtet, schreibt am Ende der letzten Zahl ein 'f'!
		Ansonsten wird, wenn ihr den Code ohne 'f' am Ende einer Kommazahl ausführt, folgender Fehler auftreten:
		
		Incompatible types: possible lossy conversion from double to float
		
		Übersetzung: Inkompatible Typen: Mögliche verlustbehaftete Konvertierung von Double in Float
		*/
	}
}
