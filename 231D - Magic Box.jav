import java.util.Scanner;
 
public class MagicBoxSimplified 
{
	static int x1, y1, z1;
	static int xp, yp, zp;
	static int[] num = new int[6];
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		xp = sc.nextInt();
		yp = sc.nextInt();
		zp = sc.nextInt();
		x1 = sc.nextInt();
		y1 = sc.nextInt();
		z1 = sc.nextInt();
		for(int i = 0; i < 6; i++)
		{
			num[i] = sc.nextInt();
		}
		int sum = 0;
		if(xp < 0)
		{
		    sum += num[4];
		}
		else if(xp > x1)
		{
		    sum += num[5];
		}
		if(yp < 0)
		{
		    sum += num[0];
		}
		else if(yp > y1)
		{
		    sum += num[1];
		}
		if(zp < 0)
		{
		    sum += num[2];
		}
		else if(zp > z1)
		{
		    sum += num[3];
		}
		System.out.println(sum);
	}
}
