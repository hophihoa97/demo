import java.util.Scanner;

public class ExMang{
public static void main(String[] args)
{
int a[];
int n;
	Scanner sc=new Scanner(System.in);
	System.out.print("Nhap vao: ");
	n=sc.nextInt();
	a=new int[n];
	Nhap(a,n);
	Xuat(a,n);

}

public static void Nhap (int a[],int n){
	Scanner sc=new Scanner(System.in);
	for(int i=0;i<n;i++)
	a[i]=sc.nextInt();
}
public static void Xuat(int a[],int n){
	for(int i=0;i<n;i++)
	System.out.print(""+a[i]);
	System.out.println(" ");
}
}
