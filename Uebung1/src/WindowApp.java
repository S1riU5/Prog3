import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

/**
 * Created by Simon on 22.04.2015.
 */
public class WindowApp extends JFrame {
    private Timer t1;
    private ActionListener doIt;
    private Coord clickCoord;
    private Dot d1 = new Dot();
    private Circle c1 = new Circle(new Coord(125, 125), 100);
    private Dot d2 = new Dot(new Coord(325, 325), 100);
    private Dot[] d;
    private Circle[] c;
    private int circleSize =  100;

    /**
     * Add 100 dots to the canvas
     */
    public void createfireworke(){
        d = new Dot[100];

        for (int i=0; i< d.length; i++){
            d[i] = new Dot(new Coord(-50,-50),50);
            d[i].coordMove(0,0);
        }

    }

    /**
     * perform a step for all elements of d[]
     */
    public void moveDots(){
        for (int i=0; i<d.length; i++){
            d[i].doStep();
        }
        repaint();
    }

    /**
     * Position all elements of d[] at the clickposition and
     * add a coordmove of (1,1)
     */
    public void setDotToClick(){
        for (int i = 0; i < d.length; i++){
            d[i].coordReplace(clickCoord);
            d[i].coordMove(1,1);
        }

        repaint();
    }


    private class MyWindowsListener extends WindowAdapter {
        public void windowClosing(WindowEvent ev) {
            System.exit(0);
        }
    }

    private class MyMouseListener implements MouseListener {
        public void mouseClicked(MouseEvent ev) {
        }

        public void mousePressed(MouseEvent ev) {
            clickCoord.setX(ev.getX());
            clickCoord.setY(ev.getY());
            setDotToClick();
            repaint();
        }

        public void mouseReleased(MouseEvent ev) {
        }

        public void mouseExited(MouseEvent ev) {
        }

        public void mouseEntered(MouseEvent ev) {
        }
    }

    public WindowApp(String s) {
        super(s);
        addWindowListener(new MyWindowsListener());
        addMouseListener(new MyMouseListener());
        setSize(400, 400);
        setVisible(true);
        GraphicObject.maxCoordinate.setX(400);
        GraphicObject.maxCoordinate.setY(400); //Spielplatz Abmessungen Definierung
        clickCoord = new Coord();
        createfireworke();
//        d = new Dot[5];
//        for (int i = 0; i < d.length; i++) {
//            d[i] = new Dot();
//        }
//        c = new Circle[5];
//        for (int i = 0; i < d.length; i++) {
//            c[i] = new Circle(new Coord(i*30,i*20), circleSize);
//
//        }





        doIt = new ActionListener() {
            public void actionPerformed(ActionEvent e) {

                GraphicObject.maxCoordinate.setX(getWidth());
                GraphicObject.maxCoordinate.setY(getHeight());
                moveDots();



            }
        };
        t1 = new Timer(25, doIt);
        t1.start();
    }

    public void paint(Graphics g) {
//clear window
        super.paint(g);


//object state determination
      /*  c1.bu(clickCoord);
        d2.bu(clickCoord);;*/
        d1.coordReplace(clickCoord);
//show objects
//        g.setColor(Color.CYAN);
//        c1.draw(g);
//        g.setColor(Color.RED);
//        d2.draw(g);
//        g.setColor(Color.GREEN);
        d1.draw(g);
//show a string
        g.setColor(Color.BLUE);
        g.drawString("MouseClick at: " + clickCoord.getX() + ", "
                + clickCoord.getY(), (int) clickCoord.getX() + 5, (int) clickCoord.getY() + 5);

        for (int i=0; i<d.length; i++){
            d[i].draw(g);
        }
//        for (int i = 0; i < d.length; i++) {
//            d[i].draw(g);
//            c[i].draw(g);
//            d[i].bu(clickCoord);
//            c[i].bu(clickCoord);
//        }
    }
}

