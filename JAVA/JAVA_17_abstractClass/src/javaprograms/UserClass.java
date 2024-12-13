package javaprograms;

public class UserClass extends Hello{


	void onText(String text) {
		
		System.out.println(text);
		
	}
	
	public UserClass() {

//		When you pass this as an argument to a method or constructor,
//		you are passing the current instance of the class.
		TextScanner ts = new TextScanner(this);
		ts.scan();
		 
	}
	public static void main(String[] args) {
		
		UserClass  u = new UserClass();
		
	}

	
}
