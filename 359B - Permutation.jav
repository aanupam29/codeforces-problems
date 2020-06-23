import java.security.Principal;
import java.util.Scanner;

public class main_java {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        for(int i = 0; i < n; i++)
        {
            if (i > 0)
            {
                System.out.print(" ");
            }
            if (k > 0)
            {
                System.out.print((2 * i + 2) + " " + (2 * i + 1));
            }
            else
            {
              System.out.print((2 * i + 1) + " " + (2 * i + 2));
            }
            k--;
        }
    }
}
