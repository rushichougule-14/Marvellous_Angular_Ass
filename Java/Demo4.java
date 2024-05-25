
class Demo4
{
	public static void main(String[] args) 
	{
		Marvellous mobj = new Marvellous();
		mobj.fun();
		mobj.gun();
		mobj.fun(11);

		System.out.println("Value of i from Hello1 : "+Hello1.i);
		System.out.println("Value of i from Hello2 : "+Hello2.i);
		
	}

}

interface Hello1
{
	int i = 20;
	void fun();
	void gun();
}

interface Hello2
{
	int i = 21;
	void fun(int no);
}

class Marvellous implements Hello1, Hello2
{
	public void fun()
	{
		System.out.println("Inside Fun");
	}

	public void gun()
	{
		System.out.println("Inside gun");

	}

	public void fun(int no)
	{
		System.out.println("Inside fun with integer");
	}

	// Variation is important and fun method cant be defined 2 times  ..define only once with different arguments !!!!

}
