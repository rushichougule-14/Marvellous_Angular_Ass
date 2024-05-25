import java.util.*;

class Program250
{
	public static void main(String args[])
	{
		System.out.println("Enter the First Number:");
		Scanner sobj = new Scanner(System.in);
		int iNo1 = 0 ,iNo2 = 0 , iRet = 0;

		iNo1 = sobj.nextInt();

		System.out.println("Enter the Second Number:");

		iNo2 = sobj.nextInt();


		//iRet = obj.Addition(iNo1,iNo2);

		Aruthmetic obj = new Aruthmetic(iNo1,iNo2);

		iRet = obj.Addition();

		System.out.println("Addition is :"+iRet);
	}

}

class Aruthmetic
{
	public int iValue1;
	public int iValue2;

	public Aruthmetic(int i,int j)
	{
		iValue1 = i;
		iValue2 = j;
	}

	public int Addition()
	{
		int iAns = 0;
		iAns = iValue1 + iValue2;
		return iAns;
	}
}

