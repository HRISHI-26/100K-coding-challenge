package javaprograms;

public class B {

	public static void main(String[] args) {
//		Interface Example
		
//		As obj is object of interface,
//		its constructor should be of any implementing class
		
//		ie An object of interface type play with parameters of
//		its Implemented classes
		
//		ie Interface act as a template  
//		Its > Object work for Class who implements < interface
		A obj = new Hello("sEcReT cOdE");
		obj.displayA();
	}
}
