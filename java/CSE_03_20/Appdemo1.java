import java.applet.*;
import java.awt.*;
public class Appdemo1 extends Applet
{
	public void paint(Graphics g)
	{
		g.drawString("HIIIIIIIIIII",100,100);
		g.setColor(Color.RED);
		g.drawLine(100,100,100,200);
		
	}
}
/*<applet code="Appdemo1.class" height = 300 width = 300>
</applet>
*/

