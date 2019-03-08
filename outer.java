class outer1 {
  static int x1;
  private int x2;
  int x3;
  class Inner {
    int y;
    void display() {
      System.out.println(x1 + " " + x2 + " " + x3 + " " + y);
}
void print() {
  System.out.println(x1);
}
class outer {
  public static void main(String[] args) {
  outer obj = new outer();
  System.out.println(obj.x1 + " " obj.x2 + " " + obj.x3);
  outer.Inner in = new outer() new
