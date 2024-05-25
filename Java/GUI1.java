import java.awt.*;

class GUI1
{
	public static void main(String[] args)
	{
		MarvellousWindows mobj = new MarvellousWindows("Marvellous Infosystem");
		mobj.setSize(300,300);
		mobj.setVisible(true);
		
	}
}

class MarvellousWindows extends Frame
{
	public MarvellousWindows(String str)
	{
		super(str);
	}
}