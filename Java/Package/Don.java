import Marvellous.PPA.Mathematics;
import Marvellous.Python.Demo;

class Don
{
    public static void main(String arg[])
    {
        Mathematics obj = new Mathematics();
        Demo dobj = new Demo();

        int iret = obj.Add(10,11);
        System.out.println("Addition is :"+iret);

        dobj.fun();
    }
}