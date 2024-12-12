package javaprograms;

public class StaticExample {

	public static void main(String[] args) {
//		A static method can only access static parameters 
//		from outside
//		we need an object to access non static parameters
		
//		if static is used we can,t apply OOPS concepts
		
//		Using object
		StaticExample se = new StaticExample();
		se.nonStaticFun();
		
//		Without using Object
		staticFun();
		
		
		
	}
	
	static void staticFun() {
		System.out.println("Hello");
	}
	
	void nonStaticFun() {
		System.out.println("Hey Object");
	}
}
