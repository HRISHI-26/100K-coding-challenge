package javaprograms;

public class SampleTread extends Thread{

	
	@Override
	public void run() {
		super.run();
		
		for(int i = 0; i < 10; i++) {
			System.out.println("Thread Count "+i);
			try {
				Thread.sleep(1000);
			}
			catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
	}

}
