import java.lang.*;

class Arithmetic
{
	public int no1;
	public int no2;

	public Arithmetic()
	{
		this.no1 = 0;
		this.no2 = 0;
	}

	public Arithmetic(int x,int y)
	{
		this.no1 = x;
		this.no2 = y;
	}

	public int Addition()
	{
		int ans = 0;
		ans = this.no1 + this.no2;
		return ans;
	}

	public int Subtraction()
	{
		int ans = 0;
		ans = this.no1 -  this.no2;
		return ans;
	}
}

class Marvellous
{
	public static void main(String arg[])
	{
		System.out.println("Inside Main...");

		Arithmetic obj1;
		obj1 = new Arithmetic();
		Arithmetic obj2 = new Arithmetic(21,11);

		int ret = 0;
		ret = obj2.Addition();
		System.out.println("Addition is :"+ret);

		ret = obj2.Subtraction();
		System.out.println("substraction is :"+ret);
		
	}
}