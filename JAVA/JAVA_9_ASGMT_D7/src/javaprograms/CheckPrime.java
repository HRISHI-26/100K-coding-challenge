package javaprograms;

public class CheckPrime {

	int value;
	int flag = 0;
	
	void check() {
		
		for(int i = 2; i <= value/2; i++ ) {
			if(value%i == 0) {
				notPrime(value);
				break;
			}prime(value);
		}
	}
	
	void prime(int number) {
		System.out.println(number+" is prime");
	}
	
	void notPrime(int number) {
		System.out.println(number+" is not prime");
	}
}
