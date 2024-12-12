package javaprograms;

public class SumProgram {

	public static void main(String ar[]) {
		
		Sum s1 = new Sum();
		Sum s2 = new Sum();
		
		s1.num1 = 10;
		s1.num2 = 20;
		
		s2.num1 = 100;
		s2.num2 = 200;
		
		System.out.print("S1: ");
		s1.calculateSum();
		s1.display();
		
		System.out.print("S2: ");
		s2.calculateSum();
		s2.display();
	}
}
