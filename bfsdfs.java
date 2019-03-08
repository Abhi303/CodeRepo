import java.util.*;
@SuppressWarnings("unchecked")
class bfsdfs {
	private int n;
	LinkedList<Integer>[] ll;
	int arr[];
	bfsdfs(int v) {
		n = v;
		ll = new LinkedList[n];
		arr = new int[n];
		for(int i = 0; i < n; i++) {
			ll[i] = new LinkedList<Integer>();
		}
	}
	void dfs(int source, int prev) {
		arr[source] = 1;
		System.out.print(source + " ");
		for(int i = 0; i < ll[source].size(); i++) {
			int x = ll[source].get(i);
			if(arr[x] == 1 && x != prev) System.out.print("Cycle ");
			else if(arr[x]==0) dfs(x, source);
		}
		arr[source] = 2;
	}
	void bfs(int source) {
		Queue<Integer> q = new LinkedList<>();
		q.add(source);
		arr[source] = 1;
		while(q.size() != 0) {
			int x = q.remove();
			System.out.print(x + " ");
			for(int i = 0; i < ll[x].size(); i++) {
				int blah = ll[x].get(i);
				if(arr[blah] == 0) {
					arr[blah] = 1;
					q.add(blah);
				}
			}
		}
	}	
	void insert(int a, int b) {
		ll[a].add(b);
		ll[b].add(a);
	}
	void disGraphs() {
		int count = 0;
		for(int i = 0; i < n; i++) {
			if(arr[i] == 0) {
				count++;
				bfs(i);
				System.out.println();
			}
		}
		System.out.println("Count = " + count);	
	}

	public static void main(String[] args) {
		System.out.print("Enter Vertices = ");
		int x;
		Scanner sc = new Scanner(System.in);
		x = sc.nextInt();
		bfsdfs obj1 = new bfsdfs(x);
		bfsdfs obj2 = new bfsdfs(x);
		bfsdfs obj3 = new bfsdfs(x);
		int a, b;
		System.out.print("Enter Edges = ");
		a = sc.nextInt();
		b = sc.nextInt();
		while(a != -1) {
			obj1.insert(a, b);
			obj2.insert(a, b);
			obj3.insert(a, b);
			a = sc.nextInt();
			b = sc.nextInt();
		}
		System.out.print("Source = ");
		a = sc.nextInt();
		System.out.print("DFS:- ");
		obj1.dfs(a, -1);
		System.out.print("\nBFS:- ");
		obj2.bfs(a);
		System.out.println("\nDisconnected Graphs:- ");
		obj3.disGraphs();
	}
}
