class FinalChar
{
	public static void main(String arg[])
	{
		Demo obj = new Demo();

		System.out.println("Value of j :"+obj.j);
		
		//obj.j++;  NA j = j+1;
	}
}

class Demo
{
	public int i;
	public final int j;

	public Demo()
	{
		this.i = 10;
		this.j = 11;
	}

}