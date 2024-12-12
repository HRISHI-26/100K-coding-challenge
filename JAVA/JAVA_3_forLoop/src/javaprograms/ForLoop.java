package javaprograms;

import java.util.Scanner;

public class ForLoop {

	public static void main(String ar[]) {
//		Sum of range of values		
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter a limit");
		int limit = sc.nextInt();
		
		int sum = 0;
		for(int i = 1; i <= limit; i++) {
			sum += i; 
		}
		System.out.println("Sum: "+sum);
	}
}
