import java.io.*;
import java.util.*;

class tree  {
    public tree left, right;
    int data;
    public int[] arr, lev;
    static tree insert(tree tt,int n , int d , int item) throws Exception {
        tree t = tt;
	if(t == null) {
                tree t1 = new tree();
                t1.data = item;
                t1.left = t1.right = new tree();
                t1.left = t1.right = null;
             if(t.arr[d] == 0) {
                t.arr[d] = item;
                t.lev[d] = n;
             }
             else if(t.lev[d] > n) {
                t.arr[d] = item;
                t.lev[d] = n;
             }
             return t1;
         }
         else if(item > t.data) t.right = insert(t.right, n + 1, d + 1, item);
         else if(item < t.data) t.left = insert(t.left, n + 1, d - 1, item);
         return tt;
    }
}



public class viewtop {
    public static void main(String args[]) throws Exception{
	int[] arr = new int[100];
        for(int i = 0; i < 100; i++) arr[i] = 0;
        tree t = new tree();
        t.arr = new int[100];
        t.lev = new int[100];
        for(int i = 0; i < 100; i++) {
            t.arr[i] = 0;
            t.lev[i] = 0;
        }
        t = null;
        Scanner sc = new Scanner(System.in);
        while(true) {
            int a = sc.nextInt();
            if(a == -1) break;
            t = t.insert(t,1, 50, a);
       }
       int i = 0;
       while(t.arr[i] == 0) i++;
       while(t.arr[i] != 0) System.out.println(t.arr[i++]);
    }
} 
