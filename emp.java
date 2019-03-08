import java.util.Collections
import java.util.Comparator
import java.util.Scanner 
public class emp implements Comparator<emp> {
    
    int empid;
    String name;
    double salary;
    @Override 
    public String toString() {
        return new String("ID = " + empid + "Name = " + name + "Salary = " + salary);
    }
    @Override
    public int compare(emp o1, emp o2) {
        return (o1.name).compareTo(o2.name);
     }
    int maximum(emp s, Comparator,emp. c) {
        int i;
        i = c.compare(this, e);
        return i;
    }
    public static void main(String[] args) {
        emp e[] = new emp[5];
        Scanner sc = new Scanner(System.in);
        for(int i = 0; i < 5 ; i++) {
        System.out.print("Enter deatails for employee as id, name, salary: ");
        e[i].empid = sc.nextInt();
        e[i].name = sc.nextLine();
        e[i].salary = sc.nextDouble();
    }
    sc.close();
}	
}
    
