import java.lang.*;
import java.util.*;
public class rankbst {

	private class bst {
		private bst left, right;
		private int data;
		bst(int val) {
			data = val;
			left = right = null;
		}
	}

	private bst root;

	public void insert(int val) {
		root = insertval(root, val);
	}

	private bst insertval(bst node, int val) {
		if(node == null) {
			node = new bst(val);
		}
		else if(val < node.data) node.left = insertval(node.left, val);
		else if(val > node.data) node.right = insertval(node.right, val);
		return node;
	}

	rankbst() {
		root = null;
	}

	static void inorder(bst root) {
		if(root == null) return;
		inorder(root.left);
		System.out.println(root.data);
		inorder(root.right);
	}

	static void preorder(bst root) { 
		if(root == null) return;
		System.out.println(root.data);
		preorder(root.left);
		preorder(root.right);
	}

	static void postorder(bst root) {
		if(root == null) return;
		postorder(root.left);
		postorder(root.right);
		System.out.println(root.data);
	}

	static int height(bst root) {
		if(root == null) return 0;
		return Math.max(height(root.left), height(root.right)) + 1;
	}

	static void levelorder(bst root) {
		java.util.Queue<bst> q = new java.util.LinkedList<>();
		q.add(root);
		while(!q.isEmpty()) {
			bst temp = q.poll();
			System.out.print(temp.data + " ");
			if(temp.left != null) q.add(temp.left);
			if(temp.right != null) q.add(temp.right);
		}
	}

	static int arr[] = new int[200];
	static int lev[] = new int[200];

	static void topview(bst root, int n, int d) {
		if(root == null) return;
		if(arr[d] == 0 || lev[d] > n) {
			arr[d] = root.data;
			lev[d] = n;
		}
		topview(root.left, n + 1, d - 1);
		topview(root.right, n + 1, d + 1);
	}

	static int leftlevel(bst root, int n) {
		if(root == null) return 0;
		if(n == 1) {
			System.out.println(root.data);
			return 1;
		}
		int x = leftlevel(root.left, n - 1);
		if(x == 1)
			return 1;
		leftlevel(root.right, n - 1);
		return 0;

	}
	static void leftview(bst root) {
		int n = height(root);
		for(int i = 1; i<= n; i++) leftlevel(root, i);
	}

	public static void main(String args[]) {
		rankbst r = new rankbst();
		Scanner sc = new Scanner(System.in);
		while(true) {
			int a = sc.nextInt();
			if(a == -1) break;
			r.insert(a);
		}
		while(true) {
			System.out.print("Enter Number :");
			int x = sc.nextInt();
			if(x == -1) break;
			switch(x) {
				case 1: System.out.println("Inorder");
					inorder(r.root); break;
				case 2: System.out.println("Preorder:");
					preorder(r.root); break;
				case 3: System.out.println("Postorder:");
					postorder(r.root); break;
				case 4: System.out.println("LevelOrder:");
					levelorder(r.root); break;
				case 5: break;
				case 6: System.out.println("TopView:");
					topview(r.root, 1, 100);
					int i = 0;
					while(arr[i] == 0) i++;
					while(arr[i] != 0) System.out.println(arr[i++]);
					break;
				case 7: System.out.println("LeftView:");
					leftview(r.root); break;
			}
		}
	}
}	       
