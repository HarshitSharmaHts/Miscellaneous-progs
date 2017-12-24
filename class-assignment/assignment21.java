import java.util.Scanner;
class assignment21
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter side1   :   ");
		double a = sc.nextDouble();		
		System.out.print("Enter side2   :   ");
		double b = sc.nextDouble();		
		System.out.print("Enter side3   :   ");
		double c = sc.nextDouble();		
		if(isTriangle(a,b,c))
		{
			System.out.println("Triangle can be formed ..");
			System.out.println("Angle a,b,c   :   "+ (float)angle(a,b,c));
			System.out.println("Angle c,a,b   :   "+ (float)angle(c,a,b));
			System.out.println("Angle b,c,a   :   "+ (float)angle(b,c,a));
		}
		else
			System.out.println("Trinangle can't be formed ..");
	}
	static double angle(double a, double b, double c)
	{
		return Math.toDegrees(Math.acos(((b*b + c*c - a*a)/(2 * b * c))));
	}
	static boolean isTriangle(double side1, double side2, double side3)
	{
		if(side1 + side2 <= side3 || side2 + side3 <= side1 || side3 + side1 <= side2)
			return false;
		return true;
	}
}
