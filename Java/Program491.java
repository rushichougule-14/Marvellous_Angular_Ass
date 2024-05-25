import java.util.*;

class Program491
{
    public static void main(String Arg[])
    { 
        Scanner sobj = new Scanner (System.in);
        System.out.println("Enter the String:");

        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        HashMap <Character , Integer> hobj = new HashMap();
        int Freq = 0;

        for(char ch :Arr)
        {
            if (hobj.containsKey(ch));
            {
                Freq = hobj.get(ch);
                hobj.put(ch,Freq+1);
            }
            else
            {
                hobj.put(ch,1);
            }
        }
        System.out.println(hobj);
     

    }
}