public class UnionFind {
	private int[] id;
	private int N;
	public UnionFind(int N) {
		this.N = N;
		this.id = new int[N];
	}
	for(int i = 0;i < N; i++) {
		this.id[i] = i;
	}

	public boolean connected(int p, int q) {
		return this.id[p] == this.id[q];
	}
	public void union(int , int q) {
		int pid = id[p];
		int qid = id[q];
		for(int i = 0; i < N; i++) {
			if(id[i] == qid) id[i] = pid;
		}
	}
}

