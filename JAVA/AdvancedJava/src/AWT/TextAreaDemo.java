package AWT;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.TextEvent;
import java.awt.event.TextListener;


public class TextAreaDemo extends Frame implements ActionListener {
    TextArea ta;
    Label l;
    TextField tf;
    Button b;

    TextAreaDemo() {
        super("Text Area Demo");

        ta = new TextArea(10,30);
        l = new Label("No Text Entered");
        tf = new TextField(20);
        b = new Button("Click");

        setLayout(new FlowLayout());

        add(ta);
        add(l);
        add(tf);
        add(b);

        b.addActionListener(this);
    }

    public void actionPerformed(ActionEvent e) {
        ta.insert(tf.getText(),ta.getCaretPosition());
        l.setText(tf.getText());
    }

    public static void main(String[] args) {
        TextAreaDemo ta = new TextAreaDemo();
        ta.setSize(540, 360);
        ta.setVisible(true);
    }
}
