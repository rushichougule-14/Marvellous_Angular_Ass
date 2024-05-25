import java.awt.*;
import java.awt.event.*;

class GUI5
{
	public static void main(String[] args) 
	{
		MarvellousWindows mobj = new MarvellousWindows("First",500,500);
		
	}
}

class MarvellousWindows extends Frame implements WindowListener
{

	public MarvellousWindows(String str , int x,int y)
	{
		super();
		setTitle(str);
		setSize(x,y);
		addWindowListener(this);
		setVisible(true);
	}

	public void windowDeactivated(WindowEvent obj){}
	public void windowActivated(WindowEvent obj){}
	public void windowDeiconified(WindowEvent obj){}
	public void windowIconified(WindowEvent obj){}
	public void windowClosed(WindowEvent obj){}
	public void windowOpened(WindowEvent obj){}
	public void windowClosing(WindowEvent obj)
	{
		System.exit(0);
		//System.out.println("Inside Closing");
	}

}