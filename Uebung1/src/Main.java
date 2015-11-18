/**
 * Created by Simon on 22.04.2015.
 */
public class Main {
        /**
         * Create a new WindowApp instance with the size of 800 x 600 px
         * @param args
         */
        public static void main(String[] args) {
                WindowApp w1 = new WindowApp("MyWindow");
                w1.setVisible(true);
                w1.setSize(800, 600);
        }
}
