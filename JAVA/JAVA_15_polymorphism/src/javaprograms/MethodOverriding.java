package javaprograms;

public class MethodOverriding {

	public static void main(String[] args) {
//		Method Overriding
//		If Parent and child have parameter of same name
//		method accessed using child object is childClass Method
		
		ChildClass c = new ChildClass();
		
		c.display();
		c.name();
	}
}
