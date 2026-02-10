abstract class Main {
    public String group;
    public int education;
    public abstract void performance();
}

//transient: attributes and methods are skipped when serializing object
//synchronized: methods can only be accessed by one thread at a time
//volatile: The value of an attribute is not cached thread-locally, and is read from main memory

class User extends Main {
    public int time = 7;

    public void performance(){
        if (education > time){
            System.out.println("Excellent!");
        }
        else{
            System.out.println("Such Stupidity!");
        }
    }

    //Test Encapsulation
    oop change = new oop(time);
    {
        change.set_info("Abstraction", 5);
        change.get_info();
    }

}