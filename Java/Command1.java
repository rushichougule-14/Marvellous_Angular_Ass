import java.util.Scanner;

class Command1
{
	public static void main(String[] args)
	{
		if (args.length == 2)
		{
			int iNo1 =Integer.parseInt(args[0]);
			int iNo2 =Integer.parseInt(args[1]) ;

			int ans = iNo1+iNo2;
			System.out.println("lnAddition is :"+ans);
		}
		
	}
}
