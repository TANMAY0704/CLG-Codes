import java.applet.*;
import java.awt.*;

class prac extends Applet
{
    public void paint(Graphics g)
    {
        g.drawString("Hello World", 20, 20);
        g.setColor(Color.red);

        g.drawRect(20, 20, 100, 100);
        g.fillRect(20, 20, 100, 100);

        g.drawOval(20, 20, 100, 100);
        g.fillOval(20, 20, 100, 100);
        
        g.drawLine(20, 20, 100, 100);
    }
}
/*
<html>
    <applet code = "prac.class" width=500 height=800>
    </applet>
</html>    
 */