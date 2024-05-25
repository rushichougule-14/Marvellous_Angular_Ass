import java.util.*;

class StackS
{
    public static void main(String str[])
    {
        Stack<String>sobj = new Stack<String>();
        sobj.push("India");
        sobj.push("Us");
        sobj.push("UK");
        sobj.push("China");

        sobj.pop();

        Iterator<String> iobj = sobj.iterator();
        System.out.println("Stack data is :");

        while(iobj.hasNext())
        {
            System.out.println(iobj.next());
        }

        sobj = null;

    }
}