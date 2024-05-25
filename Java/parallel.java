import java.lang.*;
class parallel
{
	public static void main(String[] args) throws Exception
	{
		System.out.println("Inside -"+Thread.currentThread().getName());
		Demo obj1 = new Demo();
		Demo obj2 = new Demo();

		obj1.setName("First");
		obj2.setName("Second");

		obj1.start();
		obj2.start();
		obj1.join();
		obj2.join();
		System.out.println("End of main");


		
	}
}

class Demo extends Thread
{
	public void run()
	{
		for(int i = 1 ; i< 10 ; i++)
		{
			try
			{
				Thread.sleep(1000);
				System.out.println("Thread name is :"+Thread.currentThread().getName() +":"+i);
			}
			catch (Exception obj)
			{

			}
		}
	}
}
