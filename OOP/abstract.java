abstract class Main {
    public String group;
    public int result;
}

//transient: attributes and methods are skipped when serializing object
//synchronized: methods can only be accessed by one thread at a time
//volatile: The value of an attribute is not cached thread-locally, and is read from main memory

class Comp extends Main {
    String group = "computer";
    private long time = System.nanoTime();
    private int rolling;

    Comp(){
        rolling = (int) (time%3);
    }

    public int result = rolling-1;
}

class Player extends Main {
    String group = "player";
    int choice;

    public void make_choice(){
        System.out.println("Make your choice: ");
        choice = oop.inp.nextInt();
        oop.inp.nextLine();
        result = choice%3 - 1;
    }
}