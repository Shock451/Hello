import java.util.Scanner;

class hello{
	public static void main(String argv[]){
		Scanner input = new Scanner(System.in);
		System.out.print("What's your name? ");
		System.out.println("hello, " + input.next());
	}
}
