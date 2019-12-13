import java.util.Scanner;

public class ExSw
{
	public static void main(String[] args)
	{
	Scanner input=new Scanner(System.in);//Nhap vao
	System.out.println("Nhap vao:");//In ra 
	String useInput=input.next();//doc tung ky tu vi Scanner khong ho tro 
	char grade=useInput.charAt(0);//Lay ky tu dau tien
	switch(grade){
			case 'A':
			System.out.println("A");
			break;
			case 'B':
			System.out.println("B");
		
	default: 
		System.out.println("c");
			}
	


	}

}
