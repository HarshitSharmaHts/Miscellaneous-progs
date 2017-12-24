import java.util.Scanner;

class  assignment38
{
	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter date [dd-mm-yyyy]   :   ");
		String date = sc.nextLine();
		System.out.println(changeDateFormat(date));
	}
	static String changeDateFormat(String date)
	{
		String[] str = date.split("-");
		int month = Integer.parseInt(str[1]);
		switch(month)
		{
			case 1:
				str[1] = "January";
				break;
			case 2:
				str[1] = "February";
				break;
			case 3:
				str[1] = "March";
				break;
			case 4:
				str[1] = "April";
				break;
			case 5:
				str[1] = "May";
				break;
			case 6:
				str[1] = "June";
				break;
			case 7:
				str[1] = "July";
				break;
			case 8:
				str[1] = "August";
				break;
			case 9:
				str[1] = "September";
				break;
			case 10:
				str[1] = "Octomber";
				break;
			case 11:
				str[1] = "November";
				break;
			case 12:
				str[1] = "December";
				break;
		}
		return str[0]+" "+str[1]+" "+str[2];
	}
}
