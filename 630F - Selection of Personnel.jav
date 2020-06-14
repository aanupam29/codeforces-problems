import java.util.*;
import java.io.*;
public class Main{
    public static long mod = 1000000007L;
    public static long A[],fact[];
    public static int aa;
    public static boolean pr[];
    public static void main(String args[]) throws IOException
    {
        BufferedReader lector = new BufferedReader(new InputStreamReader(System.in));
        int a= Integer.parseInt(lector.readLine());
        long r[][] = new long[a+1][8];
        r[0][0]=1L;
        for(int n =1;n<a+1;n++)
        {
            r[n][0]=1L;
            for(int m = 1;m<8;m++)
            r[n][m]=r[n-1][m]+r[n-1][m-1];
        }
        System.out.println(r[a][7]+r[a][6]+r[a][5]);
    }
}
