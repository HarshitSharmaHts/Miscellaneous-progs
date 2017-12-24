import java.util.Scanner;
class assignment32
{
	static String first;
	static String secon;
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter any String with even length  :   ");
		String str = sc.nextLine();
		splitter(str);
		System.out.println(first);
		System.out.println(secon);
	}
	static void splitter(String str)
	{	
		char[] chr = str.toCharArray();
		first = String.valueOf(chr,0 ,(int)chr.length/2);
		secon = String.valueOf(chr, (int)chr.length/2,(chr.length - (int)(chr.length/2)));
	}
}
