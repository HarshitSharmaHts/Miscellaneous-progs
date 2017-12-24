import java.util.Scanner;

class assignment33
{
	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the number   :   ");;
		int num = sc.nextInt();

		assignment32.splitter(Integer.toString(num));
		System.out.println(Integer.parseInt(assignment32.first));
		System.out.println(Integer.parseInt(assignment32.secon));
	}
}
