class DemoString  extends Exception
{
    public static void main(String args[])
    {
        String str1 = "Hello";
        
        String str2 = new String("Hello");

        char Arr[] = {'H','e','l','l','o'};

        String str3 = new String(Arr);

        System.out.println("String Length is :"+str1.length());
        System.out.println("String Length is :"+Arr.length);
        System.out.println(str1);
        System.out.println(str2);
        System.out.println(str3);

        String s1 = "   Mumbai";
        String s2 = "Pune   ";

        String s3 = s1.concat(" "+s2);
        System.out.println(s3);

        System.out.println(s3.length());

        char Brr [] = s3.toCharArray();
        for(int i = 0;i<Brr.length;i++)
        {
            System.out.println(Brr[i]);
        }

        System.out.println(s3.toLowerCase());

        System.out.println(s3.trim());



    }
}