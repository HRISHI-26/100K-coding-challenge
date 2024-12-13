package javaprograms;

public class TextScanner {

	Hello obj;
	
//	UserClass extends Hello, so an instance of UserClass 
//	is also an instance of Hello (inheritance relationship).  
//	Thus, this can be passed to TextScanner.
	
	public TextScanner(Hello obj) {
		this.obj = obj;
	}
	
	void scan() {
		
		String text = "Scanned Text";
		obj.onText(text );
	}
}
