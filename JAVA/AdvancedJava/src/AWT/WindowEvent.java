package AWT;
import java.awt.*;
import java.awt.event.WindowListener;

class MyFrame5 extends Frame implements WindowListener {
    Label l;

    MyFrame5() {
        super("Window Event Demo");

        l = new Label("           ");

        setLayout(new FlowLayout());
        add(l);

        addWindowListener(this);
    }

    @Override
    public void windowOpened(java.awt.event.WindowEvent e) {
        l.setText("Window Opened");
    }

    @Override
    public void windowClosing(java.awt.event.WindowEvent e) {
        l.setText("Window Closing");
        System.exit(0);
    }

    @Override
    public void windowClosed(java.awt.event.WindowEvent e) {
        l.setText("");
    }

    @Override
    public void windowIconified(java.awt.event.WindowEvent e) {
        l.setText("Iconified");
    }

    @Override
    public void windowDeiconified(java.awt.event.WindowEvent e) {
        l.setText("DeIconified");
    }

    @Override
    public void windowActivated(java.awt.event.WindowEvent e) {
        l.setText("Window Activated");
    }

    @Override
    public void windowDeactivated(java.awt.event.WindowEvent e) {
        l.setText("Window Deactivated");
    }
}
public class WindowEvent {
    public static void main(String[] args) {
        MyFrame5 f = new MyFrame5();
        f.setVisible(true);
        f.setSize(500,500);
    }
}
