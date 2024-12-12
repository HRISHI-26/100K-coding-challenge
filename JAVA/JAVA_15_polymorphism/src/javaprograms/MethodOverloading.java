package javaprograms;

public class MethodOverloading {

	public static void main(String[] args) {
		
//		Method Overloading
		SuperClass s = new SuperClass();
		
//		if a class have methods of same name
//		you can separately access it with help of arguments
		
		s.display();
		s.display("Java");
	}
}
