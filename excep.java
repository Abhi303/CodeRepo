import java.lang.*;
public class excep {
	public static void main(String[] args) {
		try {
			int a = 5/0;
		}
		catch(ArithmeticException e) {
			System.out.println(e);
		}
	}
}
