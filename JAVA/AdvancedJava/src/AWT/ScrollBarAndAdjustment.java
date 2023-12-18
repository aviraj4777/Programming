package AWT;
import java.awt.*;
import java.awt.event.AdjustmentEvent;
import java.awt.event.AdjustmentListener;

public class ScrollBarAndAdjustment extends Frame implements AdjustmentListener {
    Scrollbar red,green,blue;
    TextField tf;

    public ScrollBarAndAdjustment()
    {
        super("Scroll bar demo");

        red=new Scrollbar(Scrollbar.HORIZONTAL,0,20,0,255);
        blue=new Scrollbar(Scrollbar.HORIZONTAL,0,20,0,255);
        green=new Scrollbar(Scrollbar.HORIZONTAL,0,20,0,255);
        tf=new TextField(20);

        tf.setBounds(50,50,300,50);
        red.setBounds(50,150,300,30);
        blue.setBounds(50,200,300,30);
        green.setBounds(50,250,300,30);


        setLayout(null);
        add(tf);
        add(red);
        add(blue);
        add(green);

        red.addAdjustmentListener(this);
        blue.addAdjustmentListener(this);
        green.addAdjustmentListener(this);
    }

    @Override
    public void adjustmentValueChanged(AdjustmentEvent e) {
        tf.setBackground(new Color(red.getValue(),blue.getValue(),green.getValue()));

    }

    public static void main(String[] args) {
        ScrollBarAndAdjustment s = new ScrollBarAndAdjustment();
        s.setSize(500,500);
        s.setVisible(true);
    }

}
