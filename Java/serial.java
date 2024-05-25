import java.lang.*;
class serial
{
	public static void main(String[] args)
	{
		Demo dobj = new Demo();
		Hello hobj = new Hello();
		dobj.Display();
		System.out.println(" ");
		hobj.Display(); 

		
	}
}

class Demo
{
	public void Display()
	{
		for (int i = 1 ; i<= 10 ;i++)
		{
			System.out.println("Demo :"+i);
		}
	}
}

class Hello
{
	public void Display()
	{
		for (int i = 1 ; i<= 10 ;i++)
		{
			System.out.println("Hello :"+i);
		}

	}
}