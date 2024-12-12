package javaprograms;

import java.util.Scanner;

public class QuestionTwo {

	public static void main(String ar[]) {
		
//		Basic Arithmetic Operations
		Operations obj1 = new Operations();
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter Two numbers");
		obj1.num1 = sc.nextInt();
		obj1.num2 = sc.nextInt();
		
		System.out.println("\n1.Addition\n"
				+ "2.Substraction\n"
				+ "3.Multiplication\n"
				+ "4.Division");
		System.out.println("Enter your choice");
		int choice = sc.nextInt();
		
		switch(choice) {
		case 1:
			obj1.addition();
			break;
		case 2:
			obj1.substraction();
			break;
		case 3:
			obj1.multiplication();
			break;
		case 4:
			obj1.division();
		}
		
	}
}
