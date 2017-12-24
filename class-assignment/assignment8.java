import java.util.Scanner;
class assignment8
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		int D = valueD(a,b,c);
		if(D>0)
		{
			System.out.println("Roots are real..");
			System.out.println("root1 : " + (-b+Math.sqrt(D))/(2.0*a));
			System.out.println("root2 : " + (-b-Math.sqrt(D))/(2.0*a));
		}
		else if(D<0)
		{
			System.out.println("Roots are imaginary..");
			System.out.println("root1 : " + ((double)-b/(2.0*a)) + "+i" + (Math.sqrt(Math.abs(D))/2.0*a));
			System.out.println("root2 : " + ((double)-b/(2.0*a)) + "-i" + (Math.sqrt(Math.abs(D))/2.0*a));
		}
		else
		{
			System.out.println("Roots are real and same..");
			System.out.println("root1 : " + (-1.0*b/2.0*a));
			System.out.println("root2 : " + (-1.0*b/2.0*a));
		}
	}
	static int valueD(int a,int b,int c)
	{
		return (b*b - 4*a*c);
	}
}
