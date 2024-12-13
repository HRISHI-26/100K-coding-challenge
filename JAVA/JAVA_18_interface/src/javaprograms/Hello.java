package javaprograms;

public class Hello implements A{

	String text;
	
	public Hello(String text) {
		this.text = text;
	}
	
	public void displayA() {
		System.out.println("Code is:"+text);
	}
}
