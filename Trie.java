class Trie {
	boolean isEnd;
	Trie[] arr = new Trie[26];
	Trie() {
		isEnd = false;
		for(int i = 0; i < 26; i++) {
			arr[i] = null;
		}
	}
	void insert(String s) {
		int n = s.length();
		Trie node = this;
		for(int i = 0; i < n; i++) {
			int x = s.charAt(i) - 'a';
			if(node.arr[x] == null)
				node.arr[x] = new Trie();
			node = node.arr[x];
		}
		node.isEnd = true;
	}
	boolean search(String s) {
		Trie node = this;
		for(int i = 0; i < s.length(); i++) {
			int x = s.charAt(i) - 'a';
			if(node.arr[x] == null)
				return false;
			node = node.arr[x];
		}
		return (node != null && node.isEnd);
	}
		
	public static void main(String[] args) {
		Trie root = new Trie();
		root.insert("abhi");
		System.out.println(root.search("abhi"));
	}
}

