import java.io.*;

public class Verdoppelung {

 public static void main(String[] args) throws IOException {
  InputStreamReader isr = new InputStreamReader(System.in);
  BufferedReader br = new BufferedReader(isr);
  int wert;
  boolean weiter;

  do {
   System.out.println("Bitte geben sie den Wert f�r die Berechnung ein: ");
   String eingabe = br.readLine();
   wert = Integer.parseInt(eingabe);
   System.out.println("Das Ergebnis ist: " + (wert * wert));
   System.out.println("M�chten Sie fortfahren?");
   System.out.println("(0 f�r Weiter, 1 f�r Abbrechen)");
   eingabe = br.readLine();
   wert = Integer.parseInt(eingabe);
   if (wert == 1) {
    weiter = false;
    System.out.println("Auf Wiedersehen! Haben Sie einen sch�nen Tag");
   } else {
    weiter = true;
   }
  } while (weiter);
 }
}
