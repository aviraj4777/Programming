package Swing;
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

class MyFrame extends JFrame implements ActionListener {
    Button b;
    Label l;
    int count = 0;

    MyFrame() {
        super("First Swing App");
        setLayout(new FlowLayout());

        b = new Button("Click");
        l = new Label("Counted " + count + " Times");
        add(b);
        add(l);

        b.addActionListener(this);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        count = count + 1;
        l.setText("Counted " + count + " Times");
    }
}
public class FirstDemo {
    public static void main(String[] args) {
        MyFrame f = new MyFrame();
        f.setVisible(true);
        f.setSize(500,500);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
