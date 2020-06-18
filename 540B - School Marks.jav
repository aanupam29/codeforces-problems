import java.util.Scanner;
public class b 
{
  public static void main(String[] args) 
  {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt(), k = sc.nextInt(), p = sc.nextInt();
    int x = sc.nextInt(), y = sc.nextInt();
    int m = (n + 1) / 2, l = 0, sum = 0;
    int[] a = new int[n];
    for (int i = 0; i < k; i++) 
    {
      a[i] = sc.nextInt();
      sum += a[i];
      if (a[i] < y) 
      {
        l++;
      }
    }
    if (l >= m) 
    {
      System.out.println(-1);
      return;
    }
    int fill = (m - l - 1) > (n - k) ? (n - k) : (m - l - 1);
    if (x < ((n - k - fill) * y) + fill + sum)
    {
      System.out.println(-1);
      return;
    }
    for (int i = 0; i < fill; i++) 
    {
      System.out.print("1 ");
    }
    for (int i = 0; i < (n - k - fill); i++)
    {
      System.out.print(y + " ");
    }
    System.out.println("");
  }
}
