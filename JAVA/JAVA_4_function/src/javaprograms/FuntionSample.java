package javaprograms;

import java.util.Scanner;

public class FuntionSample {
	public static void main(String ar[]) {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter 2 numbers");
		int num1 = sc.nextInt();
		int num2 = sc.nextInt();
		 
		int ans = sum(num1, num2);
		
		System.out.println("Sum: "+ans);
	}
	
	 static int sum(int a, int b) {
		 int result = a + b;
		 return result;
	 }
}
