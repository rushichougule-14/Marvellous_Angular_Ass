import java.util.Scanner;

class Exception3
{	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		int no1 , no2 = 0;
		float result = 0.0f;

		System.out.println("Enter the First Number:");
		no1 = sobj.nextInt();


		System.out.println("Enter the Second Number:");
		no2 = sobj.nextInt();
		Demo obj = new Demo();


		try
		{
			result = obj.Division(no1,no2);
			System.out.println("Division is :"+result);

		}

		catch(ArithmeticException obj1)
		{
			System.out.println("Exception Occured ");
		}

	}


}

class Demo
{
	public float Division(int x, int y) throws ArithmeticException
	{
		float ans = 0.0f;

		ans = x/y;
		return ans;
	}
}