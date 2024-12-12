package javaprograms;

public class SuperClass {

	public void display() {
		System.out.println("This is no argument function");
	}

	void display(String string) {
		System.out.println("This is argument function");
		System.out.println("Argument Recieved is:"+string);
	}

}
