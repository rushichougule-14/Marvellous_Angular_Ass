import java.awt.*;

class GUI4
{
	public static void main(String[] args) 
	{
		MarvellousWindows mobj = new MarvellousWindows("First",500,300);
		
	}
}

class MarvellousWindows extends Frame
{
	Button b1;
	TextField t1;

	public MarvellousWindows(String str , int x,int y)
	{
		super();
		setTitle(str);
		setSize(x,y);

		b1 = new Button("Submit");
		t1 = new TextField();

		b1.setBounds(50,50,100,50);
		t1.setBounds(50,100,100,50);

		add(b1);
		add(t1);

		setLayout(null);

		setVisible(true);
	}
}