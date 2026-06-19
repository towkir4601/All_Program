import java.util.ArrayList;
class student{
    String name;
    int age;
    student(String a,int b){
        this.name = a;
        this.age = b;
    }
};
public class ObjectArrayListExample {
    public static void main(String[] args){
        student s1 = new student("Towkir",22);
        student s2 = new student("Mahim",23);
        ArrayList<student> studentlist = new ArrayList<student>();
        studentlist.add(s1);
        studentlist.add(s2);
        for(student x:studentlist){
          student st = studentlist.get(studentlist.indexOf(x));
            System.out.println("নাম: " + st.name + ", বয়স: " + st.age);
        }
    }
}
