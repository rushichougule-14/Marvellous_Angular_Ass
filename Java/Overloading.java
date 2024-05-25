import java.lang.*;

class Demo 
{
	public int Add(int no1,int no2)
	{
		return no1+no2;
	}

	public float Add(float no1,float no2)
	{
		return no1+no2;
	}
}

class Overloading
{
	public static void main (String arg[])
	{
		System.out.println("Inside Main");

	}

	Demo obj = new Demo();
	int iRet = 0;
	iRet = obj.Add(10,11);

	System.out.println("Addition of 2 Integrs :"+iRet);

	
	float fRet = 0.0f;
	fRet = obj.Add(10.1f,11.2f);
	System.out.println("Addition of 2 float :",+fRet);

	
}
