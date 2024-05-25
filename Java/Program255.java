import java.util.*;
class Program255
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner (System.in);

		System.out.println("ENter the number :");
		int iValue = sobj.nextInt();

		Numbers obj = new Numbers();
		obj.FactorsMultiplication(iValue);
	}
}

class Numbers
{
	public void FactorsMultiplication(int iNo)
	{
		int iCnt = 0 ;
		int iMult = 1;

		for (iCnt = 1 ; iCnt <= iNo/2 ; iCnt++)
		{
			if (iNo % iCnt == 0)
			{
				iMult = iMult * iCnt;
			}
		}

		System.out.println(iMult);

	}
}