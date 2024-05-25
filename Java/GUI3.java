import java.awt.*;

class GUI3
{
	public static void main(String[] args) 
	{
		MarvellousWindows mobj1 = new MarvellousWindows("Marevllous",500,500);
		//MarvellousWindows mobj2 = new MarvellousWindows("Infosytems",200,200);
		
	}
}

class MarvellousWindows extends Frame
{
	public MarvellousWindows(String str , int x ,int y)
	{
		super();
		setTitle(str);
		setSize(x,y);
		setVisible(true);
	}
}