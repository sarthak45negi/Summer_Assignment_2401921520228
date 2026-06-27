class Point {
    private int x, y;
    public Point() {
        x = 0;
        y = 0;
    }
    public Point(int x, int y){
        this.x = x;
        this.y = y;
    }
    public void setX(int x){
        this.x = x;
    }

    public void setY(int y){
        this.y = y;
    }
    public void setXY(int x, int y){
        this.x = x;
        this.y = y;
    }
    public void display(){
        System.out.println("("+ x +", "+ y+")");
    }
}

public class Q3_Main{
    public static void main(String[] args){
        Point p = new Point();
        p.display();
        p.setXY(10, 20);
        p.display();
    }
}