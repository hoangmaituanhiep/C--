import java.util.Scanner;

public class temp {
    public void func_call(int times){
        for (int i=1; i<=times; i++){
            System.out.println(i + ", Callin ...");
        }
    }

    public void IQ_assess(int num){
        try (Scanner line = new Scanner(System.in)) {
            System.out.println("Out of ten. How intelligent are you?");
            int iq = line.nextInt();

            if (iq > num) {
                System.out.println("You sure have some IQ");
            }
            else {
                System.out.println("Such stupidity!");
            }
        }
    }
}
