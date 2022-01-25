public class Rechnen {
	public static void main(String[] args) {
		/* 
			Initialisierung der Variablen a und b als floats. (Dieser Datentyp wird für die
			Darstellung einer reellen Zahl mit der Größe von 4 byte (32 bit) benutzt.)
			Alternativ können die Variablen a und b als double initialisiert werden. (Dieser Datentyp wird für die
			Darstellung einer reellen Zahl mit der Größe von 8 byte (64 bit) benutzt.)
		*/
		float a, b;
		a = 0.35f;
		b = 5f;
		System.out.print("Addition: ");
		System.out.println(a + b);
		System.out.print("Subtraktion: ");
		System.out.println(a - b);
		System.out.print("Multiplikation: ");
		System.out.println(a * b);
		System.out.print("Division: ");
		System.out.println(a / b);
		System.out.print("Modulo: ");
		System.out.println(a % b);
	}
}
