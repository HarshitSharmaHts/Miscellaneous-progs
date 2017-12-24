import java.util.Scanner;
class assignment39
{
	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter date [mm-dd-yyyy] : ");
		String date = sc.nextLine();
		if(date.charAt(2) != '-' || date.charAt(5) != '-')
		{
			System.out.println("ERROR : Wrong Date Format");
			return;
		}
		String [] str = date.split("-");
		int dd = Integer.parseInt(str[0]);
		int mm = Integer.parseInt(str[1]);
		int yy = Integer.parseInt(str[2]);

		if(isDateValid(dd,mm,yy))
		{
			switch(zeller(dd,mm,yy))
			{
				case 1:
					str[0] = "Monday";
					break;
				case 2:
					str[0] = "Tuesday";
					break;
				case 3:
					str[0] = "Wednesday";
					break;
				case 4:
					str[0] = "Thursday";
					break;
				case 5:
					str[0] = "Friday";
					break;
				case 6:
					str[0] = "Saturday";
					break;
				case 7:
					str[0] = "Sunday";
					break;
			}
			System.out.println(date + " is " + str[0]);
		}
		else
			System.out.println("Invalid Date");
	}
	static boolean isDateValid(int dd, int mm, int yyyy)
	{
		int [] month = {31,28,31,30,31,30,31,31,30,31,30,31};
		if((yyyy%4 == 0 && yyyy%100 != 0)||yyyy%400 ==0)
			month[1]=29;
		if(mm > 12 || dd > month[mm-1])
			return false;
		return true;
	}
	static int zeller(int dd, int mm, int yyyy)
	{
		int h = 0;
		if(mm<3)
			mm+=12;
		h =(dd +(13*(mm+1)/5)+(yyyy%100)+(yyyy%100)/4 + (yyyy/100)/4 - 2*(yyyy/100))%7;
		return ((h+5)%7)+1;
	}
}
