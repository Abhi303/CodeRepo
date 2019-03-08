import java.util.ArrayList;
import java.util.Scanner;
class arraylist {
  public static void main(String args[]) {
    int i;
    Scanner sc = new Scanner(System.in);
    ArrayList<Integer> ar = new ArrayList<Integer>();
    System.out.println("Enter Numbers : ");
    for(i = 0;i < 10; i++) {
     ar.add(sc.nextInt());
    }
  System.out.println("Size of ArrayList = " + ar.size());
  System.out.println(ar);
  System.out.print("Enter Nubmerv to find = ");
  Integer a;
  a = sc.nextInt();
  if(ar.contains(a) == true) System.out.println("Element Found At = " + ar.indexOf(a));
  else System.out.println("Element Not Found");
  System.out.print("Enter No. to Remove = ");
  a = sc.nextInt();
  ar.remove(a);
  ar.clear();
  System.out.println(ar + "\nSize of Array = " + ar.size());
  
}
}
   
  
