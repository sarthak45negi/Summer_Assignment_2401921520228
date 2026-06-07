interface LibraryUser{
    void registerAccount();
    void requestBook();
}
class KidUser implements LibraryUser{
    int age;
    String booktype;
    public KidUser(int age, String booktype){
        this.age = age;
        this.booktype = booktype;
    }
    @Override
    public void registerAccount(){
        if (age < 12) {
            System.out.println("You have successfully registered under a Kids Account");
        } else {
            System.out.println("Sorry, Age must be less than 12 to register as a kid");
        }
    }
    @Override
    public void requestBook(){
        if (booktype.equalsIgnoreCase("Kids")){
            System.out.println("Book Issued successfully, please return the book within 10 days");
        } else {
            System.out.println("Oops, you are allowed to take only kids books");
        }
    }
}
class AdultUser implements LibraryUser{
    int age;
    String booktype;
    public AdultUser(int age, String booktype){
        this.age = age;
        this.booktype = booktype;
    }
    @Override
    public void registerAccount(){
        if (age > 12){
            System.out.println("You have successfully registered under an Adult Account");
        } else {
            System.out.println("Sorry, Age must be greater than 12 to register as an adult");
        }
    }
    @Override
    public void requestBook(){
        if (booktype.equalsIgnoreCase("Fiction")){
            System.out.println("Book Issued successfully, please return the book within 7 days");
        } else {
            System.out.println("Oops, you are allowed to take only adult Fiction books");
        }
    }
}
public class Library_interface{
    public static void main(String[] args){
        System.out.println(" Case 1 : KidUser");
        KidUser kid1 = new KidUser(10, "Kids");
        kid1.registerAccount();
        kid1.requestBook();
        System.out.println();
        KidUser kid2 = new KidUser(18, "Fiction");
        kid2.registerAccount();
        kid2.requestBook();
        System.out.println("\n Case 2 : AdultUser");
        AdultUser adult1 = new AdultUser(5, "Kids");
        adult1.registerAccount();
        adult1.requestBook();
        System.out.println();
        AdultUser adult2 = new AdultUser(23, "Fiction");
        adult2.registerAccount();
        adult2.requestBook();
    }
}