import java.util.Scanner;

class assignment7
{
	public static void main(String [] args)
	{
		int a,b,c,d,e,f;
		Scanner sc = new Scanner(System.in);
		System.out.print("a: ");
		a = sc.nextInt();
		System.out.print("b: ");
		b = sc.nextInt();
		System.out.print("c: ");
		c = sc.nextInt();
		System.out.print("d: ");
		d = sc.nextInt();
		System.out.print("e: ");
		e = sc.nextInt();
		System.out.print("f: ");
		f = sc.nextInt();

		if(areParallel(a,b,d,e))
		{
			if(areCoincident(a,b,c,d,e,f))
			{
				System.out.println("Lines are coincident..");
				return;
			}
			System.out.println("Lines are parallel..");
		}
		else
		{
			int m1m2 = ((a*e) - (b*d));
			double x =((double)((e*c) - (b*f)))/((double)m1m2);
			double y =((double)((a*f) - (d*c)))/((double)m1m2);

			System.out.println("Lines are intersecting  each other at ( " + x + ", " + y + " )");
		}
	}
	static boolean areParallel(int a,int b, int d, int e)
	{
		return ((-a/b) == (-d/e));
	}
	static boolean areCoincident(int a,int b,int c,int d,int e,int f)
	{
		return ((a/d==b/e)&&(b/e==c/f)&&(c/f==a/d));
	}
	
}
