import java.io.*;

public class Verdoppelung {

 public static void main(String[] args) throws IOException {
  InputStreamReader isr = new InputStreamReader(System.in);
  BufferedReader br = new BufferedReader(isr);
  int wert;
  boolean weiter;

  do {
   System.out.println("Bitte geben sie den Wert für die Berechnung ein: ");
   String eingabe = br.readLine();
   wert = Integer.parseInt(eingabe);
   System.out.println("Das Ergebnis ist: " + (wert * wert));
   System.out.println("Möchten Sie fortfahren?");
   System.out.println("(0 für Weiter, 1 für Abbrechen)");
   eingabe = br.readLine();
   wert = Integer.parseInt(eingabe);
   if (wert == 1) {
    weiter = false;
    System.out.println("Auf Wiedersehen! Haben Sie einen schönen Tag");
   } else {
    weiter = true;
   }
  } while (weiter);
 }
}
