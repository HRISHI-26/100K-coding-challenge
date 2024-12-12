package firstProgram;

import java.util.Scanner;

public class Hello {

	public static void main(String ar[]){
		
		System.out.println("Helloworld");
		
		String name = "Java";
		System.out.println("This is "+name+"Language");
		
		System.out.println("\nSample Program:");
		
		System.out.println("Enter 2 numbers:");
		
		Scanner sc = new Scanner(System.in);
		
		int number1 = sc.nextInt();
		int number2 = sc.nextInt();
		
		int result = number1 + number2;
		
		System.out.println("Sum:"+result);
	}
}
