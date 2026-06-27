interface Test{
    int square(int n);
}
class Arithmetic implements Test{
    public int square(int n){
        return n * n;
    }
}
public class Q1_ToTestInt{
    public static void main(String[] args){
        Arithmetic obj = new Arithmetic();
        System.out.println("Square = "+ obj.square(5));
    }
}