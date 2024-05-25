class Demo6
{
	public static void main(String[] args)
 	{
 		Marvellous mobj = new Marvellous();
 		mobj .gun();
		mobj .fun();		
	}
}

interface Base
{
	void fun();
}

interface Derieved extends Base
{
	void gun();
}

class Marvellous implements Derieved
{
	public void fun()
	{
		System.out.println("Inside Fun");
	}

	public void gun()
	{
		System.out.println("Inside Gun");
	}
}
