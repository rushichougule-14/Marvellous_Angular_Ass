import java.util.*;


class ArrayOOP
{
	public static void main(String arg[])
	{
		System.out.println("Enter the Number:");

		Scanner sobj = new Scanner(System.in);

		int iSize = sobj.nextInt();

		Array obj = new Array(iSize);
		obj.Accept();

		int iRet = obj.Addtion();
		System.out.println("Addition is :"+iRet);

	}
}

class Array
{
	public int arr[];

	public Array(int iSize)
	{
		arr = new int [iSize];
	}

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the elements");

		for(int i = 0 ;i< arr.length; i++)
		{
			arr[i]= sobj.nextInt();
		}

	}

	public int Addtion()
	{
		int iSum = 0;

		for (int i= 0;i<arr.length; i++)
		{
			iSum = iSum + arr[i];
		}

		return iSum;
	}
}