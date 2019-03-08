class staticClass{
	public static void main(String args[]) {
	System.out.println(Static1.count);
	Static1.method();
	System.out.println(Static1.count);
	}
}
class Static1 {
	static int count;
	static void method() {
	count++;
	}
}
