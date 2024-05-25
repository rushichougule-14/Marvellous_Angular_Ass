import java.util.*;

class Input
{
	public static int Addition(int iNo1,int iNo2)
	{
		int iAns= 0;
		iAns = iNo1+iNo2;
		return iAns;
	}

	public static void main(String arg[])
	{
		int iValue1 = 0 ,iValue2 = 0, iRet = 0;

		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the First Number:");
		iValue1 = sobj.nextInt();

		System.out.println("Enter the Second Number:");
		iValue2 = sobj.nextInt();

		iRet = Addition(iValue1,iValue2);
		System.out.println("Addition is :"+iRet);
	}
}