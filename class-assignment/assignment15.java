import java.util.Scanner;

class assignment15
{
	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter any String     :   ");
		String original = sc.nextLine();
		System.out.print("Enter char location  :   ");
		int val = sc.nextInt();
		if(val > original.length())
		{
			System.out.println("Error : Value of integer is more than size of string..");
			return;
		}
		System.out.println("String's " + val + "element is now deleted..");
		original = original.substring(0,val-1) + original.substring(val);
		System.out.println(original);
	}
}
