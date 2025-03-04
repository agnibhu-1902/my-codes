// Fig. 12.32: Shapes2.java
// Demonstrating a general path.
import java.awt.Color;
import javax.swing.JFrame;
public class Shapes2
{
    // execute application
    public static void main( String args[] )
    {
        // create frame for Shapes2JPanel
        JFrame frame = new JFrame( "Drawing 2D Shapes" );
        frame.setDefaultCloseOperation( JFrame.EXIT_ON_CLOSE );
        Shapes2JPanel shapes2JPanel = new Shapes2JPanel();
        frame.add( shapes2JPanel ); // add shapes2JPanel to frame
        frame.setBackground( Color.WHITE ); // set frame background color
        frame.setSize( 400, 400 ); // set frame size
        frame.setVisible( true ); // display frame
    } // end main
} // end class Shapes2
