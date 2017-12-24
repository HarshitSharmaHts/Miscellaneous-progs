import java.util.Scanner;
class assignment35
{
	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter any string   :   ");
		String str = sc.nextLine();
		int [] arr = countNoDigits(str);
		for(int i = 0; i < arr.length ; i ++)
		{
			char ch = (char)(i+49);
			if(i%2 == 0)
				System.out.println();
			System.out.print(ch + "   :   " + arr[i] + "\t");
		}	
				System.out.println();
	}
	static int[] countNoDigits(String str)
	{
		int [] arr = new int[10];
		for(int i = 0 ; i < str.length() ; i ++)
		{
			if(str.charAt(i) >= '0' && str.charAt(i) <= '9')
				arr[(char)str.charAt(i)-49]++;
		}
		return arr;
	}
}
