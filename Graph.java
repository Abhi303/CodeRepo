import java.util.*;
	@SuppressWarnings("unchecked")
public class Graph {
		private List<Integer> link[];
		private int size;
		private boolean arr[]; 
		Graph(int s) {
			size = s;
			link = new LinkedList[size];
			for(int i = 0; i < size; i++) link[i] = new LinkedList<>();
			arr = new boolean[size];
		}
		private void insert(int a, int b) {
			link[a].add(b);
			link[b].add(a);
		}
		private void bfsTrav(int a, int b) {
			Queue<Integer> queue = new LinkedList<>();
			queue.add(a);
			arr[a] = true;
			while(queue.size() != 0) {
				int x = queue.poll();
				System.out.print(x + " ");
				if(x == b) break;
				for(int i = 0; i < link[x].size(); i++) {
					if(!arr[link[x].get(i)]) {
						queue.add(link[x].get(i));
						arr[link[x].get(i)] = true;
					}
				}
			}
		}
	public static void main(String args[]) {
		Graph graph = new Graph(13); 
		graph.insert(0, 1);
		graph.insert(0, 2);
		graph.insert(0, 5);
		graph.insert(0, 6);
		graph.insert(0, 0);
		graph.insert(3, 4);
		graph.insert(3, 5);
		graph.insert(4, 5);
		graph.insert(4, 6);
		graph.insert(5, 6);
		graph.bfsTrav(0, 6);
		System.out.println();
	}
}

		
