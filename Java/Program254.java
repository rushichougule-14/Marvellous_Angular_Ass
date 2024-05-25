import java.util.*;

class Program254
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		int iValue1 = 0 , iValue2 = 0;

		System.out.println("Enter the First Number:");
		iValue1 = sobj.nextInt();

		System.out.println("Enter the Second Number:");
		iValue2 = sobj.nextInt();

		Numbers obj = new Numbers();
		obj.CommonFactorsDisplay(iValue1,iValue2);




		
	}
}

class Numbers
{
	public void CommonFactorsDisplay(int iNo1 , int iNo2)
	{
		int iCnt = 0 ;

		for (iCnt = 1 ; ((iCnt <= iNo1/2)&& (iCnt <= iNo2/2)) ; iCnt++)
		{
			if ((iNo1 % iCnt == 0) && (iNo2 % iCnt == 0))
			{
				System.out.println(iCnt);
			}
		}

	}
}