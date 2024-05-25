import java.util.*;

class Program454
{
    public static void main(String arg[])
    {
        Scanner obj = new Scanner(System.in);

        System.out.println("Enter the String:");

        String str = obj.nextLine();

        String data = str.replaceAll("\\s+"," ");

        String newstr = str.trim();

        String Arr[] = newstr.split(" ");

        System.out.println("Number of words are :"+Arr.length);
    
                 
    }
}