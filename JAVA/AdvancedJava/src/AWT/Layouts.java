package AWT;
import java.awt.*;
class MyFrame2 extends Frame {
    Button b1,b2,b3,b4,b5,b6;

    public MyFrame2() {
        //super("GridLayoutDemo");
        //setLayout(new GridLayout(3,3));


        super("GridBagLayoutDemo");
        GridBagLayout gb = new GridBagLayout();
        GridBagConstraints gbc = new GridBagConstraints();
        //constraints is used to set some constraints one buttons like x and y position
        setLayout(gb);

        b1 = new Button("One");
        b2 = new Button("Two");
        b3 = new Button("Three");
        b4 = new Button("Four");
        b5 = new Button("Five");
        b6 = new Button("Six");

        //gridbaglayout is just like coordinate system here gridx value determines the horizontal position
        //and gridy value determines the vertical position

        gbc.gridx = 1;
        gbc.gridy = 1;
        add(b1,gbc);

        gbc.gridx = 1;
        gbc.gridy = 2;
        add(b2,gbc);

        gbc.gridx = 1;
        gbc.gridy = 3;
        add(b3,gbc);

        gbc.gridx = 1;
        gbc.gridy = 4;
        add(b4,gbc);

        gbc.gridx = 1;
        gbc.gridy = 5;
        add(b5,gbc);

        gbc.gridx = 1;
        gbc.gridy = 6;
        add(b6,gbc);
        //add(new Button("Seven"));
    }
}
public class Layouts {
    public static void main(String[] args) {
        MyFrame2 f = new MyFrame2();
        f.setVisible(true);
        f.setSize(500,500);
    }
}
