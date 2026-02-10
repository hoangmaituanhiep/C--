abstract class Main {
    public String group;
    public int education;
    public abstract void performance();
}

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
}