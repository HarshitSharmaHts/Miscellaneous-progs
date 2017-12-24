import java.util.Scanner;
class assignment34
{
	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter any string   :   ");
		String str = sc.nextLine();
		int [] arr = countLetters(str);
		for(int i = 0; i < arr.length ; i ++)
		{
			char ch = (char)(i+97);
			if(i%2 == 0)
				System.out.println();
			System.out.print(ch + "   :   " + arr[i] + "\t");
		}	
				System.out.println();
	}
	static int[] countLetters(String str)
	{
		int [] arr = new int[26];
		for(int i = 0 ; i < str.length() ; i ++)
		{
			if(str.charAt(i) >= 'a' && str.charAt(i) <='z')
				arr[(char)str.charAt(i)-97]++;
		}
		return arr;
	}
}
