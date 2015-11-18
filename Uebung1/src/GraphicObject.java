import java.awt.*;
import java.util.Random;

/**
 * Created by Simon on 22.04.2015.
 */
abstract class GraphicObject {
    static int cnt = 0;
    static Coord maxCoordinate = new Coord(1.0, 1.0);
    int exemplarID = 0;
    Coord coordinate;
    protected Coord step = new Coord();

    protected int size = 15;
    protected Color c = Color.BLUE;
    private Random rnd = new Random();

    public GraphicObject() {
        coordinate = new Coord(rnd.nextInt((int) maxCoordinate.getX()),
                rnd.nextInt((int) maxCoordinate.getY()));
        size = 15;
        cnt++;
        exemplarID = cnt;
        step.setX(rnd.nextInt(60) / 10 - 3.0);
        step.setY(rnd.nextInt(60) / 10 - 3.0);
        int r1 = rnd.nextInt(255);
        int g1 = rnd.nextInt(255);
        int b1 = rnd.nextInt(255);
        c = new Color(r1, g1, b1);
        size = 30;

    }

    public GraphicObject(Coord p, int size) {
        this();
        coordinate.setX(p.getX());
        coordinate.setY(p.getY());
        this.size = size;
    }

    public void doStep() {
        coordMove((int) step.getX(), (int) step.getY());
        coordCheck();
    }

    /**
     * Checks if the object is within the canvas
     */
    public void coordCheck() {
    //Der Objekt muss am Arbeitsfenster bleiben!
        if (!(coordinate.getX() >  0&& coordinate.getX() < 800)){
            step.setX((-1 * step.getX()));
        }

        if(!(coordinate.getY() > 0  && coordinate.getY() < 600 )){
            step.setY((-1 * step.getY()));
        }
    }

    public void coordReplace(Coord p) {
        coordinate.setX(p.getX());
        coordinate.setY(p.getY());
    }

    public void coordMove(int x, int y) {
        coordinate.setX(coordinate.getX() + x);
        coordinate.setY(coordinate.getY() + y);
    }

    public double getX() {
        return coordinate.getX();
    }

    public double getY() {
        return coordinate.getY();
    }

    public Coord coordGet() {
        return coordinate;
    }

    public void setSize(int size) {
        this.size = size;
    }

    public int getSize() {
        return size;
    }

    /**
     * - bu Methode — wir sind ängstlich, aber brav! :-D ----------
     */
    protected void bu(Coord p) {
        double distance = p.getDistance(this.coordinate);
        if (distance > 3 * this.size) {
            size *= 2;
        } else if (distance < this.size / 2) {
            size /= 2;
        }
    }

    public abstract void draw(Graphics g);
}


