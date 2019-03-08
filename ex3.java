class ex3 {
  int a , b ;
  ex3(int a, int b) {
    this.a = a;
    this.b = b;
}
  void change(ex3  s1, ex3 s2) {
  ex3 temp;
  temp = s1;
  s1 = s2;
  s2 = temp;
}
public static void main() { 
  ex3 s1 = new ex3(2, 3);
  ex3 s2 = new ex3(10, 20);
  change(s1, s2);
}
}
  
