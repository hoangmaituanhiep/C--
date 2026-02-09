public class oop {
    public static int limit = 6;
    String user_name;
    int tokens;

    public oop(int new_limit) {
        oop.limit = new_limit;

        this("Gay Gun", 10);
    }

    public oop(String user_name, int tokens){
        this.user_name = user_name;
        this.tokens = tokens;
    }

    public static void main(String[] args){
        temp user = new temp();
        user.IQ_assess(limit);

        oop obj = new oop(10);

        System.out.println(obj.user_name);
        System.out.println("Number of tokens possesing: " + obj.tokens);

        user.func_call(obj.tokens);
    }
}