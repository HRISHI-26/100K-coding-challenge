package javaprograms;

import java.util.Scanner;

public class IfSample {

	public static void main(String ar[]) {
//		Checking if a number is positive or negative
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter a number:");
		int number = sc.nextInt();
		
		if(number > 0) {
			System.out.println("Number is positive");
		}else {
			System.out.println("Number is negative");
		}
		
	}
}
