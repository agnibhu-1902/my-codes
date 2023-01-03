import java.awt.Color;
import java.awt.Graphics;

import javax.swing.JApplet;

public class Applet extends JApplet {
    // The message to be displayed
    String msg = "Hello, World!";

    @Override
    public void init() {
        // Set the background color to blue
        setBackground(Color.BLUE);

        // Set the foreground color to white
        setForeground(Color.WHITE);
    }

    @Override
    public void paint(Graphics g) {
        // Display the message
        g.drawString(msg, 50, 50);
    }
}
