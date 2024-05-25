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

        int Count = 0;
        for(int i=0;i<Arr.length;i++)
        {
            if((Arr[i] >= 'A')&&(Arr[i]<= 'Z'))
            {
                Arr[i] = (char) (Arr[i]+32);
            }
        }

        //String output = Arr.toString();

        String output = new String(Arr);
        
        System.out.println(output);
                 
    }
}