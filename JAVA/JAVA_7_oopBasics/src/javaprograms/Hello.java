package javaprograms;

public class Hello {

	public static void main(String ar[]) {
		
		Sample object1 = new Sample();
		Sample object2 = new Sample();
		
		object1.a = 10;
		object1.b = 20;

		object2.a = 100;
		object2.b = 200;
		
		System.out.println("Object 1-a:"+object1.a);
		System.out.println("Object 1-b:"+object1.b);
		System.out.println("Object 2-a:"+object2.a);
		System.out.println("Object 2-b:"+object2.b);
	
		
		object1.display();
		object2.display();
	}
}
