class ex1 {
  public static void main(String[] args) {
  int num1 = 2, num2 = 3;
  int[] a = new int[2];
  a[0] = num1;
  a[1] = num2;
  swap(a);
  System.out.println(a[0]+ " " +a[1]);
}
static void swap(int a[]) {
  int t = a[0];
  a[0] = a[1];
  a[1] = t;
}
}
