package javaprograms;

public class Operations {
	
	int num1;
	int num2;
	int result;

	void addition() {
		result = num1 + num2;
		System.out.println("Result: "+result);
	}
	
	void substraction() {
		if(num1 > num2)
			result = num1 - num2;
		else
			result = num2 = num1;
		System.out.println("Result: "+result);
	}
	
	void multiplication() {
		result = num1 * num2;
		System.out.println("Result: "+result);
	}
	
	void division() {
		if(num1 > num2)
			result = num1 / num2;
		else
			result = num2 / num1;
		System.out.println("Result: "+result);
	}
}
