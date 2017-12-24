import java.util.Scanner;

class assignment27
{
	static String str;
	static int sum;
	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter any digit   :   ");
		int dig = sc.nextInt();
		if(dig > 9)
		{
			System.out.println("single digit numbers only .. :)");
			return;
		}
		doIt(dig);
		System.out.println("String  :   " + getStr());
		System.out.println("Sum     :   " + getSum());
	}
	static void doIt(int num)
	{
		switch(num)
		{
			case 1 : 
				str = "one"; break;
			case 2 : 
				str = "two"; break;
			case 3 : 
				str = "three"; break;
			case 4 : 
				str = "four"; break;
			case 5 : 
				str = "five"; break;
			case 6 : 
				str = "six"; break;
			case 7 : 
				str = "seven"; break;
			case 8 : 
				str = "eight"; break;
			case 9 : 
				str = "nine"; break;
			case 0 : 
				str = "zero"; break;
		}
		sum = num*(num+1)/2;
	}
	static String getStr()
	{
		return str;
	}
	static int getSum()
	{
		return sum;
	}
}
