import java.util.Scanner;
class assignment4
{
	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter any decimal number   :   ");
		double num = sc.nextDouble();
		String[] str = Double.toString(num).split("\\.");
		System.out.println("Digits before decimal     :   " + str[0].length());
		System.out.println("Digits after decimal      :   " + str[1].length());
		int cmp = Double.compare(Double.parseDouble("."+str[1]), 0.5);
		if(cmp == 0)
			System.out.println("fractional part is equal to 0.5 ..");
		if(cmp < 0)
			System.out.println("fractional part is less than 0.5 ..");
		if(cmp > 0)
			System.out.println("fractional part is greater than 0.5 ..");

	}
}
