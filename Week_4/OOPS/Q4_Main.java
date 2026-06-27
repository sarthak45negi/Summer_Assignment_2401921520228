class Box {

    protected double length;
    protected double breadth;
    Box(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }
    double area() {
        return length *breadth;
    }
}
class Box3D extends Box {
    private double height;
    Box3D(double length, double breadth, double height) {
        super(length, breadth);
        this.height = height;
    }
    double volume() {
        return length*breadth*height;
    }
}
public class Q4_Main{
    public static void main(String[] args) {
        Box3D b = new Box3D(10, 5, 4);
        System.out.println("Area = " + b.area());
        System.out.println("Volume = " +b.volume());
    }
}