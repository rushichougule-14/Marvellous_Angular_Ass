import java.util.*;

class Program251
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the Number");

		int iValue = sobj.nextInt();

		Numbers obj = new Numbers();
		
		obj.EvenFactorsDisplay(iValue);
		
	}

}

class Numbers
{
	public void EvenFactorsDisplay(int iNo)
	{

	int iCnt = 0;

	for (iCnt = 1 ;iCnt <= iNo/2 ; iCnt++)
	{
		if (iNo % iCnt ==0)
		{
			if (iCnt % 2 == 0)
			{
				System.out.println("Even Factor is :" +iCnt);
			}
		}
	}
	}
}