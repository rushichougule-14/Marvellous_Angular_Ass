class Demo5
{
	public static void main(String[] args)
	{
		Marvellous obj = new Marvellous();
		obj.fun();
		obj.gun();
		
	}
}

interface Hello1
{
	int i =10;
	void fun();
}

class Hello2
{
	public void gun()
	{
		System.out.println("Inside Hello2 gun ");
	}
}

class Marvellous extends Hello2 implements Hello1    //sequence of extends and implements is ass it is..
{
	public void fun()
	{
		System.out.println("Inside Fun");
	}
}