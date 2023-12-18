package AWT;
import java.awt.*;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;

class MyFrame8 extends Frame {
    int x = 0, y = 0;

    MyFrame8() {
        super("Painting");

        addMouseMotionListener(new MouseAdapter() {
            @Override
            public void mouseMoved(MouseEvent e) {
                x = e.getX();
                y = e.getY();
                repaint();   //to call paint Method
            }
        });
    }

    @Override
    public void paint(Graphics g) {
        g.setColor(Color.red);
        g.fillOval(x,y,50,50);
        g.setFont(new Font("Luminary",Font.BOLD,30));
        g.drawString("Hello",x,y);
    }
}
public class PaintDemo {
    public static void main(String[] args) {
        MyFrame8 f = new MyFrame8();
        f.setSize(400,450);
        f.setVisible(true);
    }
}
