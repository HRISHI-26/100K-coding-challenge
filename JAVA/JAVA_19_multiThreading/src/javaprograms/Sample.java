package javaprograms;

public class Sample {

	public static void main(String[] args) {
		SampleTread st1 = new SampleTread();
		SampleTread st2 = new SampleTread();
		SampleTread st3 = new SampleTread();
		st1.start();
		st2.start();
		st3.start();
	}
	

}
