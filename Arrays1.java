public class Arrays1 {
 public static void main(String[] args) {
  int[] a;
  a = new int[5];

  a[0] = 1;
  a[1] = 2 + a[0];
  a[2] = 3 + a[1];
  a[3] = 4 + a[2];
  a[4] = 5 + a[3];
  System.out.print("Der Wert des ersten Feldes lautet: ");
  System.out.println(a[0]);
  System.out.print("Der Wert des Zweiten Feldes lautet: ");
  System.out.println(a[1]);
  System.out.print("Der Wert des Dritten Feldes lautet: ");
  System.out.println(a[2]);
  System.out.print("Der Wert des Vierten Feldes lautet: ");
  System.out.println(a[3]);
  System.out.print("Der Wert des Letzten Feldes lautet: ");
  System.out.println(a[4]);
 }
}