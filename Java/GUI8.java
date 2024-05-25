import java.awt.*;
import java.awt.event.*;

class GUI5
{
	public static void main(String[] args) 
	{
		MarvellousWindows mobj = new MarvellousWindows("First",500,500);
		
	}
}

class MarvellousWindows  
{
	Frame fobj;

	public  MarvellousWindows(String str,int x,int y)
	{
		fobj = new Frame(str);
	fobj.setSize(x,y);
	fobj.setVisible(true);

	fobj.addWindowListener(new WindowAdapter(){
		public void windowClosing(WindowEvent obj)
		{
			System.exit(0);
		}

	});

}

}