import java.io.*;
import java.util.Scanner;
//import java.util.math.*;
public class MangEx
{

public static void main(String[] args)
{
	int a[];
	int n;
	Scanner sc=new Scanner(System.in);
	System.out.println("Nhap n :");
	n=sc.nextInt();
	a =new int[n];
	Nhap(a,n);
	Xuat(a,n);
	check(a,n);
}
//	a=new int[n];
public  static  void Nhap(int a[], int n){
	Scanner sc=new Scanner(System.in);
	for(int i=0;i<n;i++)
		a[i]=sc.nextInt();

}	
public static void Xuat(int a[], int n){
	for(int i=0;i<n;i++)
	System.out.print(" "+a[i]);

}
    public static boolean check(int n){
        if(n<=1) return false;
        for (int i = 2;i<= Math.sqrt(n); i++)
            if(n%i==0) return false;
        return true;
    }

}
