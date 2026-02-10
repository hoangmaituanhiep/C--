public class oop {
    private static int limit = 6;
    private String user_name;
    private int tokens;
    private final static int bottom_iq = 6; //Final is like const

    public oop(int new_limit) {
        oop.limit = new_limit;

        this("Gay Gun", 10);
    }

    public oop(String user_name, int tokens){
        System.out.println("Name: "+user_name+"\tTokens: "+tokens);
    }

    public void set_info(String user_name, int tokens){
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
        user.func_call(obj.tokens);

        //Test abstract from other file
        first.education = 9;
        first.group = "Student";

        System.out.println("\nOccupation: " + first.group);
        first.performance();
    }
}