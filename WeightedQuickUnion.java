public class WeightedQuickUnion {
  private int[] id;
  private int[] sz'
  private int N;
  public WeightedQuickUnion(int N) {
    this.N = N;
    this.id = new int[N];
    this.sz = new int[N];
    for(int i = 0;i < N; i++) {
      this.id[i] = i;
      this.sz[i] = i;
    }
  }
  private int find(int p) {
    while(p != id[p]) p = id[p];
    return p;
  }
  public boolean connected(int p, int q) {
    return find[p] == find[q];
  }
  public void union(int p, int q) {
    int rootp = find(p);
    int rootq = find(q);
    if(rootp == rootq) return;
    if(sz[pid] < sz[qid]) {
      id[rootp] = id[rootp];
      sz[rootq] += sz[rootp];
    }
    else {
      id[rootq] = id[rootp];
      sz[rootp] += sz[rootq];
    }
 
  }
}
