import java.util.Scanner;

public class nhapxuat {
	private static String nhapxau(Scanner in) {
		return in.next();
	}	
	
//	static void xuatxau(String s) {
//		System.out.println(s);
//	}

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String s = nhapxau(in);
//		xuatxau(s);
//		in.close();
	}
}
