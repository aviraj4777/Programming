package AWT;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;

public class ListBoxAndChoice extends Frame implements ActionListener, ItemListener {
    List l;
    Choice c;
    TextArea ta;

    public ListBoxAndChoice() {
        super("ListAndChoice");

        l = new List(4,true);
        c = new Choice();
        ta = new TextArea(20,30);

        l.add("Monday");
        l.add("Tuesday");
        l.add("Wednesday");
        l.add("Thursday");
        l.add("Friday");
        l.add("Saturday");
        l.add("Sunday");

        c.add("January");
        c.add("February");
        c.add("March");
        c.add("April");

        setLayout(new FlowLayout());

        add(l);
        add(c);
        add(ta);

        l.addItemListener(this);
        c.addItemListener(this);
        l.addActionListener(this);
    }

    public static void main(String[] args) {
        ListBoxAndChoice l = new ListBoxAndChoice();
        l.setSize(500,500);
        l.setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        String list[]=l.getSelectedItems();

        String txt="";

        for(String x:list)
            txt+=x+"\n";

        ta.setText(txt);
    }

    @Override
    public void itemStateChanged(ItemEvent e) {
        if(e.getSource() == l)
            ta.setText(l.getSelectedItem());
        else
            ta.setText(c.getSelectedItem());
    }


}
