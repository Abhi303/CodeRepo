import java.util.Scanner;
import java.util.LinkedList;
import java.util.ArrayList;
public class graphs {
    static public void insert(int x, int y, ArrayList<LinkedList<Integer>> arr) {
	if(arr.get(x) == null) arr.get(x) = new LinkedList<Integer>();
	LinkedList<Integer> nn = new LinkedList<Integer>();
	nn.add(y);
	arr.add(0,nn);
    }
    public static void main(String args[]) {
        ArrayList<LinkedList<Integer>> arr = new ArrayList<LinkedList<Integer>>();
	Scanner sc = new Scanner(System.in);
	int x = 1, y;
	while(x != -1) {
            x = sc.nextInt();
	    y = sc.nextInt();
	    insert(x, y, arr);
        }
    }
    public void dfs(ArrayList<LinkedList<Integer>> arr) {
        for(int i = 0; i < arr.size(); i++) {
	    System.out.println(arr.get(i));
        }
    }
    
}   
