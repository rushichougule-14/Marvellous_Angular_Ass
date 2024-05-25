import java.util.*;

class Program452
{
    public static void main(String arg[])
    {
        Scanner obj = new Scanner(System.in);

        System.out.println("Enter the String:");

        String str = obj.nextLine();

        char Arr[] = str.toCharArray();

        System.out.println(str.length());
        System.out.println(Arr.length);


        int Count = 0;
        for(int i=0;i<Arr.length;i++)
        {
            if((Arr[i] >= 'a')&&(Arr[i]<= 'z'))
            {
                Count++;
            }
        }

        System.out.println("Small Character are :"+Count);
        ///////////////////////////////////////////////////////////////////////
        for(char ch :Arr)
        {
            if((ch >= 'a')&&(ch<= 'z'))
            {
                Count++;
            }
        }
        System.out.println("Small Character are :"+Count);
        /////////////////////////////////////////////////////////////////////////
        int i =0;
        while( i< Arr.length)
        {
            if((Arr[i] >= 'a')&&(Arr[i]<= 'z'))
            {
                Count++;
            }
            i++;

             System.out.println("Small Character are :"+Count);


        }
         /////////////////////////////////////////////////////////////////////////
        
    }
}