package javaprograms;

import java.util.Scanner;

public class SwappingProgram {

	public static void main(String ar[]) {
//		Swapping of 2 numbers;
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter number 1:");
		int num1 = sc.nextInt();
		System.out.println("Enter number 2:");
		int num2 = sc.nextInt();
		
		System.out.println("A:"+num1+"\tB:"+num2);
		
		int temp = num1;
		num1 = num2;
		num2 = temp;
		
		System.out.println("After Swapping:");
		System.out.println("A:"+num1+"\tB:"+num2);
	}
}
