import java.applet.*;
import java.awt.*;
import java.awt.event.*;
public class Appdemo4 extends Applet implements ActionListener
{
	Label l1;
	TextField tf1;
	 Button b1,b2;
	public void init()
	{
		l1=new Label("um");
		tf1=new TextField(20);
		b1=new Button("OK");
		b2=new Button("Clear");
		add(l1);
		add(tf1);
		add(b1);
		add(b2);
		b1.addActionListener(this);
		b2.addActionListener(this);
	}
	public void actionPerformed(ActionEvent ac)
	{
		if(ac.getSource()==b1)
			tf1.setText("INDIA");
		else
			tf1.setText("CLEARED");
	}
}
/*<applet code="Appdemo4.class" height = 300 width = 300>
</applet>
*/

