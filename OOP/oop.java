import java.util.Scanner;

public class oop {
    private static boolean outcome = false;
    final static Scanner inp = new Scanner(System.in);
    public static int turn(){
        long time = System.nanoTime();

        return (int) time%2;
    }
    public static void new_game(){
        System.out.println("\nWana continue? Y/N");
        String player_choice = inp.nextLine().trim();

        if (!player_choice.equals("Y")){
            outcome = true;
            System.out.println("Okay, Goodbye!");
        }
    }

    public static void main(String[] args){
        while (!outcome) {
            System.out.println("\n1 is Scissor.\n0 is Rock.\n-1 is Paper.");
            int turn = turn();
            Comp computer = new Comp();
            Player player = new Player(); 

            if (turn == 0){
                System.out.println("Computer go first!");
                System.out.println("Now, your turn: ");
                player.make_choice(); 
            }
            else{
                System.out.println("You go first!");
                player.make_choice();
                System.out.println("Now, it's computer's turn!");
            }

            System.out.println("Your choice is " + player.result);
            System.out.println("Computer's choice is " + computer.result + "\n");

            if (player.result == computer.result){
                    System.out.println("===> Draw...");
                }
                else if (player.result == -1 && computer.result == 1){
                    System.out.println("===> You lose!");
                }
                else if (player.result == 0 && computer.result == -1){
                    System.out.println("===> You lose!");
                }
                else if (player.result == 1 && computer.result == 0){
                    System.out.println("===> You lose!");
                }
                else {
                    System.out.println("===> You Win!!!");
                }

                outcome = false;

                new_game();
        }
    }
}