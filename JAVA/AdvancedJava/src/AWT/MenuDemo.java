package AWT;
import java.awt.*;
import java.awt.event.ActionEvent;

class MyFrame7 extends Frame {
    Menu file, sub;

    MenuItem open, save, close, closeall;
    CheckboxMenuItem auto;

    TextField tf;

    MyFrame7() {
        super("Menu Demo");

        open = new MenuItem("Open");
        save = new MenuItem("Save");
        close = new MenuItem("Close");
        closeall = new MenuItem("Close All");

        auto = new CheckboxMenuItem("Auto Save");

        file = new Menu("File");
        sub = new Menu("Close");

        file.add(open);
        file.add(save);
        file.add(sub);
        file.add(auto);

        sub.add(close);
        sub.add(closeall);

        MenuBar mb = new MenuBar();
        mb.add(file);
        setMenuBar(mb);

        tf = new TextField(20);
        setLayout(new FlowLayout());
        add(tf);

        open.addActionListener((ActionEvent e)->tf.setText("Open"));
        save.addActionListener((ActionEvent)->tf.setText("Save"));
        close.addActionListener((ActionEvent e) -> tf.setText("Close"));
        closeall.addActionListener((ActionEvent e) -> System.exit(0));

        auto.addActionListener((ActionEvent)->{
            if(auto.getState())
                tf.setText("Auto On");
            else
                tf.setText("Auto Off");
        });
    }
}
public class MenuDemo {
    public static void main(String[] args) {
        MyFrame7 f = new MyFrame7();
        f.setSize(500,450);
        f.setVisible(true);
    }
}
