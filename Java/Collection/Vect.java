import java.util.*;
import java.lang.*;

class Vect
{
    public static void main(String args[])
    {
        Vector<Integer> vobj1= new Vector<Integer>();
        System.out.println("Size of vobj1 is :"+vobj1.size());
        System.out.println("Capacity  of vobj1 is :"+vobj1.capacity());


        Vector<Integer> vobj2= new Vector<Integer>(20);
        System.out.println("Size of vobj1 is :"+vobj2.size());
        System.out.println("Capacity  of vobj1 is :"+vobj2.capacity());

        Vector<Integer> vobj3= new Vector<Integer>(40,30);  //resizeable 
        System.out.println("Size of vobj1 is :"+vobj3.size());
        System.out.println("Capacity  of vobj1 is :"+vobj3.capacity());

        vobj1.add(11);
        vobj1.add(21);
        vobj1.add(51);
        vobj1.add(101);
        vobj1.remove(2);
        vobj1.set(0,12);

        Iterator <Integer>iobj = vobj1.iterator();
        
        while(iobj.hasNext())
        {
            System.out.println(iobj.next());
        }

        System.out.println("Size of vobj1 is :"+vobj1.size());

        vobj1=null;
        iobj= null;

    }
    
}

/*same 
syncronise and non synchronises
vector synchronise slow
vector growth 2x
/*