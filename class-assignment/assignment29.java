import java.util.Scanner;

class assignment29
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter Hexadecimal Number :   ");
		String str = sc.nextLine();
		int dec = 0;
		for(int i = str.length()-1,j=0 ; i >= 0 ; i --)
		{
			int val=0;
			if(str.charAt(i) >= '0' && str.charAt(i) <= '9')
				val = (int)str.charAt(i) - 48;
			else if(str.charAt(i) >= 'A' && str.charAt(i) <= 'F')
				val = (int)str.charAt(i) - 55;
			else
			{
					System.out.println("Only HexaDecimal numbers are accepted  ..");
					return;
			}
			dec = dec + (int)(val*(Math.pow(16,j)));
			j++;
		}
		System.out.println("Decimal equavalent       :   " + dec);
	}
}
