package AWT;
import java.awt.*;
import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;

class MyFrame6 extends Frame {
    Button b1,b2,b3;

    TextField t1,t2,t3;

    Panel p1,p2,cp;

    Panel mainp;

    Checkbox c1,c2;

    CardLayout cl;

    MyFrame6() {
        super("CardLayout Demo");

        CheckboxGroup cg = new CheckboxGroup();

        c1 = new Checkbox("One",true,cg);
        c2 = new Checkbox("Two",false,cg);

        b1 = new Button("One");
        b2 = new Button("Two");
        b3 = new Button("Three");

        t1 = new TextField(10);
        t2 = new TextField(10);
        t3 = new TextField(10);

        cp = new Panel();
        cp.add(c1);
        cp.add(c2);

        p1 = new Panel();
        p1.add(b1);
        p1.add(b2);
        p1.add(b3);

        p2 = new Panel();
        p2.add(t1);
        p2.add(t2);
        p2.add(t3);

        mainp = new Panel();
        cl = new CardLayout();
        mainp.setLayout((LayoutManager) cl);

        mainp.add("One",p1);
        mainp.add("Two",p2);

        add(cp,BorderLayout.NORTH);
        add(mainp,BorderLayout.CENTER);
    }
}
public class CardLayout {
    public static void main(String[] args) {
        MyFrame6 f = new MyFrame6();
        f.setVisible(true);
        f.setSize(500,500);
    }
}
