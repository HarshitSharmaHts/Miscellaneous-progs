import java.util.Scanner;

class twoDim
{
	double x;
	double y;

	twoDim(double x, double y)
	{
		this.x = x;
		this.y = y;
	}
	twoDim()
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("X : ");
		double a = sc.nextDouble();
		System.out.print("Y : ");
		double b = sc.nextDouble();
		x=a;
		y=b;
	}

	static double distanceTo( twoDim one, twoDim two )
	{
		return Math.sqrt(Math.pow((one.x - two.x),2) + Math.pow((one.y - two.y),2));
	}
}

public class assignment20
{
	public static void main(String[] args)
	{
		twoDim p1,p2,p3;
	       System.out.println("***Point one***");	
	       p1 = new twoDim();
	       System.out.println("***Point two***");	
	       p2 = new twoDim();
	       System.out.println("***Point three***");	
	       p3 = new twoDim();
	       double d1,d2,d3;
	       d1 = twoDim.distanceTo(p1,p2);
	       d2 = twoDim.distanceTo(p2,p3);
	       d3 = twoDim.distanceTo(p3,p1);
		if(isTriangle(d1,d2,d3))
			System.out.println("Perimeter of triangle is   :   " + (d1+d2+d3));
		else
			System.out.println("Error : Tringle Dimensions wrong");
	}

	static boolean isTriangle(double side1, double side2, double side3)
	{
		if(side1 + side2 <= side3 || side2 + side3 <= side1 || side3 + side1 <= side2)
			return false;
		return true;
	}
}
