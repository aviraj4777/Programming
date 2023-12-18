package AWT;
import java.awt.*;
import java.awt.event.MouseListener;
import java.awt.event.MouseMotionListener;

class MyFrame4 extends Frame implements MouseListener, MouseMotionListener {

    Label l1,l2;

    MyFrame4() {
        super("Mouse Event Demo");

        l1 = new Label("");
        l2 = new Label("");

        setLayout(null);

        l1.setBounds(10,50,100,20);
        l2.setBounds(10,80,100,20);

        add(l1);
        add(l2);

        addMouseListener(this);
        addMouseMotionListener(this);

    }
    @Override
    public void mouseClicked(java.awt.event.MouseEvent e) {
        l1.setText("Mouse Clicked");
    }

    @Override
    public void mousePressed(java.awt.event.MouseEvent e) {
        l1.setText("Mouse Pressed");
    }

    @Override
    public void mouseReleased(java.awt.event.MouseEvent e) {
        l1.setText("Mouse Release");
    }

    @Override
    public void mouseEntered(java.awt.event.MouseEvent e) {
        l1.setText("Mouse Entered");
    }

    @Override
    public void mouseExited(java.awt.event.MouseEvent e) {
        l1.setText("Mouse Exited");
    }

    @Override
    public void mouseDragged(java.awt.event.MouseEvent e) {
        l1.setText("Mouse Dragged");
    }

    @Override
    public void mouseMoved(java.awt.event.MouseEvent e) {
        l1.setText("Mouse Moved");
        l2.setText("(" + e.getX() +"," + e.getY() + ")");
    }
}
public class MouseEvent {
    public static void main(String[] args) {
        MyFrame4 f = new MyFrame4();
        f.setVisible(true);
        f.setSize(500,400);
    }
}
