package javaprograms;

public class ChildClass extends ParentClass{

	void display() {
		System.out.println("This is Child class");
	}
	
	void name() {

//		used to access super class parameters		
		super.name();
	}

}
