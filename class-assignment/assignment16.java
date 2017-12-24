import java.util.Scanner;
class assignment16
{
	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter any string            :   ");
		String str = sc.nextLine();
		
		char [] temp = str.toCharArray();
		for(int i = 0 ; i < temp.length ; i ++)
		{
			if (temp[i] >= 'A' && temp [i] <='Z')
			{
				System.out.println("Upper case letter detected...");
				return;
			}
			if (temp[i] >= 'a' && temp [i] < 'z')
				temp[i] =(char) (temp[i]+1);
			if(temp[i] == 'z')
				temp[i] = 'a';
		}
		str = new String(temp);
		System.out.println("String after replacements   :   " + str);
	}
}
