import java.util.Scanner;
class assignment36
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter any String   :   ");
		String str = sc.nextLine();
		str = (str.charAt(str.length()-1)) + (new String(str.toCharArray(),0, str.length()-1));
		System.out.println("String after operations   :   " + str);
	}
}
