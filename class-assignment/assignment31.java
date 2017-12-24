import java.util.Scanner;

class assignment31
{
	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter any bit stream   :   ");
		String bitst = sc.nextLine();
		int dec = binToDec(bitst);
		System.out.println("Decimal equivalent       :   " + dec);
		System.out.println("Ocatal equivalent        :   " + decToOct(dec));
		System.out.println("Hexadecimal equivalent   :   " + decToHex(dec));
	}
	static int binToDec( String bin )
	{
		int j=0;
		int val=0;
		for(int i = bin.length() - 1 ; i >= 0 ; i --,j ++)
		{
			if(bin.charAt(i) == '1')
				val = val + (int)Math.pow(2,j);
		}
		return val;
	}
 	static String decToOct(int num)
	{
		int val = 0, i = 0, rem = 0, oct = 0;
		while(num>0)
		{
			val=(int)num/8;
			rem = num - val*8;
			num /= 8;
			oct += rem*(Math.pow(10,i));
			i++;
		}
		return Integer.toString(oct);
	}
	static String decToHex(int num)
	{
		int val = 0, i = 0, rem = 0;
		String hex = "";
		while(num>0)
		{
			val = (int) num/16;
			rem = num - val*16;
			num /= 16;
			if(rem >= 0 && rem <= 9)
				hex = (char)(rem+48) + hex;
			if(rem >= 10 && rem <= 15)
				hex = (char)(rem+55) + hex;
		}
		return hex;
	}
}
