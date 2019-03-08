import java.util.Scanner;
class balpar {
  public static void main {
    Stack<String> stk = new Stack<String>;
    String s;
    Scanner sc = new Scanner(System.in);
    s = sc.nextLine();
    sc.close();
    int i;
    for(i = 0; i < s.length() ; i++) {
      if(s[i] == '{' || s[i] == '(' s[i] == '[') {
        stk.push(s[i]);
      }
      else if(s[i] == '}') {
        if(stk.peek() == '{') {
          stk.pop();
        }
      else {
        flag = 0;
        break;
      }  
        
    
