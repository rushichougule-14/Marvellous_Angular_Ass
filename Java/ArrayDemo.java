class ArrayDemo
{
    public static void main(String arg[])
    {
    	int arr[] = new int [5];
    	arr[0] = 11;
    	arr[1] = 21;
    	arr[2] = 51;
    	arr[3] = 101;
    	arr[4] = 111;

    	System.out.println("Length of Array :"+arr.length);

    	int crr[] = new int[]{11,21,51,101,111};	// Third way

		for(int icnt = 0; icnt < arr.length; icnt++)
		{
			System.out.println(arr[icnt]);
		}
        
    }
}