import java.lang.*;
import java.io.*;
public class excep2 {
	public static void main(String[] args) {
		try {
			one();
		}
		catch(Exception e) {
			System.out.println(e);
		}
	}
	static void one() throws FileNotFoundException {
		two();
	}
	static void two() throws FileNotFoundException {
		three();
	}
	static void three() throws FileNotFoundException {
		throw new FileNotFoundException();
	}
}
		
