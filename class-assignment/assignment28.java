import java.util.Scanner;

class assignment28
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter octal number   :   ");
		String str = sc.nextLine();
		int num = Integer.parseInt(str),dec = 0;
		for(int i = 0 ; num != 0 ; i ++)
		{
			int val =(int) num%10;
			if( val > 7 )
			{
				System.out.println("Only Octal numbers are accepted ..");
				return;
			}
			dec = dec +(int) ( val * Math.pow(8,i) );
			num = (int)num/10;
		}
		System.out.println("Decimal equivalent   :   " + dec);
	}
}

