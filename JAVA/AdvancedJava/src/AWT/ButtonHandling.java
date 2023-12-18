package AWT;

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class ButtonHandling extends Frame implements ActionListener {
    int count = 0;
    Label l;
    Button b;

    ButtonHandling() {
        super("Button Demo");
        l = new Label("   " + count);
        b = new Button("Click");
        b.addActionListener(this);

        setLayout(new FlowLayout());
        add(l);
        add(b);
        setVisible(true);
        setSize(540,360);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        count++;
        l.setText("   " + count);
    }

    public static void main(String[] args) {
        ButtonHandling bh = new ButtonHandling();
    }
}
