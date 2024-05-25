import java.awt.*;
import java.awt.event.*;

class GUI5
{
	public static void main(String[] args) 
	{
		MarvellousWindows mobj = new MarvellousWindows("First",500,500);
		
	}
}

class MarvellousWindows extends Frame implements ActionListener
{
	public Button b1;
	public TextField t1;

	public MarvellousWindows(String str , int x,int y)
	{
		super();
		setTitle(str);
		setSize(x,y);
		b1 = new Button("Submit");
		t1 = new TextField();

		b1.setBounds(50,50,80,50);
		t1.setBounds(50,100,100,50);

		add(b1);
		add(t1);

		b1.addActionListener(this);
		setLayout(null);
		setVisible(true);
	}

	public void actionPerformed(ActionEvent obj)
	{
		t1.setText("Rushikesh");

	}

}