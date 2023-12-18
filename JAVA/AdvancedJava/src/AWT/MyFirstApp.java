package AWT;
import java.awt.*;
class MyFrame extends Frame {
    Button b;
    Label l;
    TextField tf;

    MyFrame() {
        super("My App");

        setLayout(new FlowLayout());
         b = new Button("OK");
         l = new Label("Name");
         tf = new TextField(20);

         add(l);
         add(tf);
         add(b);

         setVisible(true);
         setSize(540,360);
    }

}
public class MyFirstApp {
    public static void main(String[] args) {
//        Frame f = new Frame("My First App");
//        f.setLayout(new FlowLayout());
//
//        Button b = new Button("OK");
//        Label l = new Label("Name ");
//        TextField tf = new TextField(20);
//
//        f.add(l);
//        f.add(tf);
//        f.add(b);
//
//        f.setSize(540, 360);
//        f.setVisible(true);

        MyFrame f = new MyFrame();
        //we can also create a constructor of application classs that is main class and implement all these things there.

    }
}
