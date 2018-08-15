import java.applet.*;
import java.awt.*;
public class Appdemo2 extends Applet
{
	String msg;
	public void init()
	{
		msg=getParameter("um");
	}
	public void paint(Graphics g)
	{
		g.drawString(msg,20,50);
	}
}
/*<applet code="Appdemo2.class" height = 300 width = 300>
<param name="um" value="hi">
</applet>
*/

