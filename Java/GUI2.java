import java.awt.*;

class GUI2
{
	public static void main(String[] args)
	{
		MarvellousWindows mobj1 = new MarvellousWindows();
		MarvellousWindows mobj2 = new MarvellousWindows();
	}
}

class MarvellousWindows extends Frame
{
	public MarvellousWindows()
	{
		super();
		setTitle("Marvellous");
		setSize(400,400);
		setVisible(true);
	}
}