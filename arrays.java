import java.util.Arrays;
class arrays {
  public static void main(String args[]) {
    int a[] = {155 , 20, 19, 14, 5, 6, 7};
    System.out.println("Length = " + a.length);
    Arrays.sort(a, 1 , 5);
    for(int i : a) System.out.print(i + " ");
    System.out.println();
    Arrays.sort(a);
    for(int i :a) System.out.print(i + " ");
    System.out.println();
    System.out.println(" Finding 5 = " + Arrays.binarySearch(a, 5));
    int a1[] = Arrays.copyOfRange(a, 1, 5);
    int a2[] = Arrays.copyOf(a, 7);
    for(int i :a1) System.out.print(i + " " );
    System.out.println();
    for(int i : a2) System.out.print(i + " ");
    System.out.println();
    Arrays.fill( a, 3, 5, 40);
    for(int i : a) System.out.print(i + " ");
    System.out.println();
  }
}
