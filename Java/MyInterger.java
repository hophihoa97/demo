import java.util.Scanner;
public class MyInteger{
private int value;
public boodlean greaterThan(MyInterger other){
	return (this.value>other.value);
}
public boolean lessThan(MyInterger other){
	return (other.greaterThan(this));

}
public MyInterger increment(){
	value++;
	return this;
}
MyInterger counter=new MyInterger();
counter.increment().increment();
}
