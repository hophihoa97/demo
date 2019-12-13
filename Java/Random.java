public class Random{
public static void main(String[] args){

int max=99,min=1;
int range=(max-min)+1;
int RandomNumber=0;	
	RandomNumber=(int)(Math.random()*range)+min;
	System.out.println("Random: " +RandomNumber);
}

}
