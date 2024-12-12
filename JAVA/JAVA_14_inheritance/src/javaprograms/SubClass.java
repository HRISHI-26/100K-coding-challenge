package javaprograms;

public class SubClass extends SuperClass{
	SubClass(){
		System.out.println("This is sub class constructor");
	}
	
	void display() {
//		super is called first else won't work
		super.displayFun();
	}
}
