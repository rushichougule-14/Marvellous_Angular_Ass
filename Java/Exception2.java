import java.util.Scanner;
class Exception2
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		int no1 , no2 = 0;
		float result = 0.0f;

		System.out.println("Enter the First Number:");
		no1 = sobj.nextInt();


		System.out.println("Enter the Second Number:");
		no2 = sobj.nextInt();


		try
		{
			result = no1/no2;
			System.out.println("Division is :"+result);
		}

		catch(ArithmeticException obj)
		{
			System.out.println("Arithmetic exception occured");
		}

		catch(ArrayIndexOutOfBoundsException obj)
		{
			System.out.println("Array index exception oocured");

		}

		// generic catch block (M.S DHONI Catches)
		
		catch(Exception obj)
		{
			System.out.println("Exception occured");

		}

		finally
		{
			System.out.println("Inside finally");

		}
	}

}