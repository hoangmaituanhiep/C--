public class Employee {
    int id;
    String firstName;
    String lastName;
    int salary;

    Employee(int id, String firstName, String lastName, int salary){
        this.id = id;
        this.firstName = firstName;
        this.lastName = lastName;
        this.salary = salary;
    }

    public int getId() {
        return this.id;
    }

    public String getFirstName(){
        return this.firstName;
    }
    public String getLastName(){
        return this.lastName;
    }
    public String getName(){
        return String.format("%s %s", firstName, lastName);
    }

    public int getSalary() {
        return this.salary;
    }
    public void setSalary(int salary){
        this.salary = salary;
    }
    public int getAnnualSalary(){
        return this.salary*12;
    }
    public int raiseSalary(int percent){
        this.salary = this.salary*percent/100 + this.salary;
        return this.salary;
    }

    public String toString(){
        return String.format("Employee[id=%d,name=%s %s,salary=%d]", this.id, this.firstName, this.lastName, this.salary);
    }
}
