import java.util.Scanner;
class assignment10
{
	public static void main(String [] args)
	{
		int P,T;
		double R;

		Scanner sc = new Scanner(System.in);
		System.out.print("P = ");
		P = sc.nextInt();
		System.out.print("T = ");
		T = sc.nextInt();
		System.out.print("R = ");
		R = sc.nextDouble();

		double A = P*Math.pow((1.0+R/100.0),T);
		System.out.println("A = " + A);
	}
}
