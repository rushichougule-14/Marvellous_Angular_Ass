import java.awt.*;
import java.awt.event.*;

class GUI5
{
	public static void main(String[] args) 
	{
		MarvellousWindows mobj = new MarvellousWindows("First",500,500);
		
	}
}

class MarvellousWindows extends WindowAdapter 
{
	Frame fobj;

	public MarvellousWindows(String str , int x,int y)
	{
		fobj = new Frame(str);
		fobj.setSize(x,y);
		fobj.addWindowListener(this);
		fobj.setVisible(true);
	}

	public void windowClosing(WindowEvent obj)
	{
		System.exit(0);
	}
}