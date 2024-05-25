import java.io.*;
import java.net.*;

class rClient
{
	public static void main(String args[]) throws Exception
	{
		String str1,str2;

		System.out.println("Client Running...");
		Socket s = new Socket("Localhost",2101);
		System.out.println("Server Conection Established..\n");

		PrintStream ps = new PrintStream(s.getOutputStream());
		BufferedReader br1 = new BufferedReader(new InputStreamReader(s.getInputStream()));
		BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));

		while(!(str1 = br2.readLine()).equals("exit"))
		{
			ps.println(str1);
			str2 = br1.readLine();
			System.out.println("Server Says :"+str2);
			System.out.println("Enter the message for server:");

		}


		ps.close();
		br1.close();
		br2.close();
	}
	


}