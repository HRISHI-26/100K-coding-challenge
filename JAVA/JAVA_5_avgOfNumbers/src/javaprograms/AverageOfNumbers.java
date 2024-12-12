package javaprograms;

import java.util.Scanner;
public class AverageOfNumbers {

	public static void main(String ar[]) {
//		Finding average of 3 numbers
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter Number 1:");
		int num1 = sc.nextInt();
		System.out.println("Enter Number 2:");
		int num2 = sc.nextInt();
		System.out.println("Enter Number 3:");
		int num3 = sc.nextInt();
		
		int average = (num1 + num2 + num3)/3;
		System.out.println("Average: "+average);


	}
}
