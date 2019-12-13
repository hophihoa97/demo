import java.util.Scanner;
public class DoEx{
public static void main(String[] args){
int a;
	Scanner sc=new Scanner(System.in);
	do{
		System.out.println("Nhap vao:");
		a=sc.nextInt();
}	while(a%10!=0);
	sc.close();
		System.out.println(""+a);

}
}
