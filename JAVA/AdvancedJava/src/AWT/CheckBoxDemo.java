package AWT;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;

public class CheckBoxDemo extends Frame implements ItemListener {
    Label l;
    Checkbox c1,c2,c3;
    CheckboxGroup cbg;

    CheckBoxDemo() {
        super("CheckBox");

        l = new Label("Nothing is Selected ");
        cbg=new CheckboxGroup();
        c1 = new Checkbox("JAVA",false,cbg);
        c2 = new Checkbox("Python",false,cbg);
        c3 = new Checkbox("C#",false,cbg);

        c1.addItemListener(this);
        c2.addItemListener(this);
        c3.addItemListener(this);

        setLayout(new FlowLayout());
        add(l);
        add(c1);
        add(c2);
        add(c3);

        setSize(540,360);
        setVisible(true);
    }


    public static void main(String[] args) {
        CheckBoxDemo cd = new CheckBoxDemo();
    }

    @Override
    public void itemStateChanged(ItemEvent e) {
        String str = "";

        if(c1.getState())
            str = str+" "+c1.getLabel();

        if(c2.getState())
            str = str+" "+c2.getLabel();

        if(c3.getState())
            str = str+" "+c3.getLabel();

        if(str.isEmpty())
            str="Nothing is Selected";

        l.setText(str);

    }
}
