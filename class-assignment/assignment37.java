import java.util.Scanner;

class assignment37
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter any string   :   ");
		String str = sc.nextLine();
		System.out.print("Enter i   :   ");
		int i = sc.nextInt();
		System.out.print("Enter j   :   ");
		int j = sc.nextInt();

		System.out.println(interChange(str,i,j));
	}
	static String interChange(String str, int i, int j)
	{
		if(i>str.length() || i<0 || j>str.length() || j<0)
			return "Invalid i or j values..";
		char [] chr = str.toCharArray();
		char temp = chr[i-1];
		chr[i-1] = chr[j-1];
		chr[j-1] = temp;
		return (new String(chr));
	}
}
