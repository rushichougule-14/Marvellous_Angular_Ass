import java.util.*;

class Program252
{
	public static void main(String[] args) 
	{
	Scanner sobj = new Scanner(System.in);

	System.out.println("Enter thr Number:");

	int iValue = 0;
	iValue = sobj.nextInt();

	Numbers nobj = new Numbers();
	nobj.EvenFactorsDisplay(iValue);
		

	}



}

class Numbers
{
	public void EvenFactorsDisplay(int iNo)
	{
		int iCnt = 0;

		for (iCnt = 2 ; iCnt <= iNo/2 ; iCnt+=2)
		{
			if ((iNo % iCnt)==0)
			{
				System.out.println("Number of Factors is:"+iCnt);
			}
		}
	}
}