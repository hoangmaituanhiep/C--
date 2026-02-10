public class oop {
    private static int limit = 6;
    String user_name;
    int tokens;
    private final static int bottom_iq = 6; //Final is like const

    public oop(int new_limit) {
        oop.limit = new_limit;

        this("Gay Gun", 10);
    }

    public oop(String user_name, int tokens){
        this.user_name = user_name;
        this.tokens = tokens;
    }

    public void get_info(){
        System.out.println("\nName: " + user_name);
        System.out.println("Tokens poccessing: " + tokens + '\n');
    }

    public static void main(String[] args){
        temp user = new temp();
        User first = new User();

        //Tests from other file
        user.IQ_assess(limit);
        oop obj = new oop(bottom_iq);
        obj.get_info();
        user.func_call(obj.tokens);

        //Test abstract from other file
        first.education = 9;
        first.group = "Student";

        System.out.println("\nOccupation: " + first.group);
        first.performance();
    }
}