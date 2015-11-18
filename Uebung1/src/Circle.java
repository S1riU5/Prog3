import java.awt.*;

/**
 * Created by Simon on 22.04.2015.
 */
public class Circle extends GraphicObject {
    /**
     * Constructor Inheritance from GraphicObject
     */
    public Circle() {
        super();
    }

    /**
     * Creates a Circle
     * @param p Start Coordinate of the Circle
     * @param size of the Circle
     */
    public Circle(Coord p, int size) {
        super(p, size);
    }

    /**
     * Draw the Circle on the canvas
     * @param g
     */
    public void draw(Graphics g) {
        g.drawOval((int) this.coordinate.getX() - size / 2, (int) coordinate.getY() - size / 2,
                size, size);
        g.setColor(Color.BLACK);
        g.drawString("#" + exemplarID + "of" + cnt,
                (int) coordinate.getX() - 15, (int) coordinate.getY());
    }
}



