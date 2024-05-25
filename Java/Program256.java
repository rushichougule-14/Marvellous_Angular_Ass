import java.util.*;

class Program256
{

	public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter number : ");
        int iNo = sobj.nextInt();


        Digits dobj = new Digits();

        boolean bRet = dobj.CheckArmStrong(iNo);

        if(bRet == true)
        {
            System.out.println(iNo+ " is a Armstrong number.");
        }
        else
        {
            System.out.println(iNo+ " is not a Armstrong number.");
        }

     }
}

