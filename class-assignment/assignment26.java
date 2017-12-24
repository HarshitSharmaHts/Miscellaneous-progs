import java.util.Arrays;
import java.util.Scanner;
class assignment26
{
	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the date [dd-mm-yyyy]  :  ");
		String date = sc.nextLine();
		if(date.length() < 10 || date.charAt(2) != '-' || date.charAt(5) != '-')
		{
			System.out.println("ERROR : Wrong Date Format");
			return;
		}
		String [] str = date.split("-");
		int dd = Integer.parseInt(str[0]);
		int mm = Integer.parseInt(str[1]); 
		int yyyy = Integer.parseInt(str[2]);

		int [] month = new int [12];
		for(int i = 0 ; i < 12 ; i ++)
		{
			if(i<=6)
			{
				if(i%2==0)
					month[i] = 31;
				else
					month[i] = 30;
			}
			else
			{
				if(i%2==0)
					month[i] = 30;
				else
					month[i] = 31;
			}
		}

		if((yyyy%4 == 0 && yyyy%100 != 0)||(yyyy%400 == 0))
			month[1] = 29;
		else
			month[1] = 28;
		
		if(mm > 12 || dd > month[mm-1])
		{
			System.out.println("ERROR : Invalid Date");
			return;
		}
		int numDays=0;
		for(int i = 0 ; i < mm-1 ; i ++)
			numDays += month[i];
		numDays += dd-1;

		System.out.println("Number of days passed after 1 Jan " + yyyy + " : " + numDays);
	}
}

