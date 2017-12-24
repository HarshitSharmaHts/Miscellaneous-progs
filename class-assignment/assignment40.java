class Date
{
	private int dd;
	private int mm;
	private int yy;
	
	public Date(int dd, int mm, int yy)
	{
		this.dd = dd;
		this.mm = mm;
		this.yy = yy;
	}
	public Date(String date)
	{
		String [] str = date.split(((Character)date.charAt(2)).toString());
		dd = Integer.parseInt(str[0]);
		mm = Integer.parseInt(str[1]);
		yy = Integer.parseInt(str[2]);
	}
	public String toString()
	{
		return (dd + "/" + mm + "/" + yy);
	}
	public void setDate(int dd, int mm, int yy)
	{
		this.dd = dd;
		this.mm = mm;
		this.yy = yy;
	}
	public int getDay()
	{
		return dd;
	}
	public int getMonth()
	{
		return mm;
	}
	public int getYear()
	{
		return yy;
	}
	public boolean isLeap()
	{
		if((yy%4 == 0 && yy%100 != 100)||yy%400 == 100)
			return true;
		return false;
	}
	public boolean isValid()
	{
		int [] month = {31,28,31,30,31,30,31,31,30,31,30,31};
		if(isLeap())
			month[1]=29;
		if(mm>12 || dd>month[mm-1])
			return true;
		return false;
	}
	public int dayNumInWeek()
	{
		int h = 0;
		if(mm<3)
			mm+=12;
		h =(dd +(13*(mm+1)/5)+(yy%100)+(yy%100)/4 + (yy/100)/4 - 2*(yy/100))%7;
		return ((h+5)%7)+1;
	}
	public void changeDateFormat()
	{
		String str = null;
		switch(mm)
		{
			case 1:
				str = " January ";
				break;
			case 2:
				str = " February ";
				break;
			case 3:
				str = " March ";
				break;
			case 4:
				str = " April ";
				break;
			case 5:
				str = " May ";
				break;
			case 6:
				str = " June ";
				break;
			case 7:
				str = " July ";
				break;
			case 8:
				str = " August ";
				break;
			case 9:
				str = " September ";
				break;
			case 10:
				str = " Octomber ";
				break;
			case 11:
				str = " November ";
				break;
			case 12:
				str = " December ";
				break;
		}
		System.out.println(dd+str+yy);
		return;
	}
	public static int diffDate(Date d1, Date d2)
	{
		int [] month = {31,28,31,30,31,30,31,31,30,31,30,31};
		int numOfDays = 0;
		if((d2.getYear()-d1.getYear())>0)
		{
			for(int i = d1.getYear() ; i < d2.getYear() ; i ++)
			{
				if((i%4 == 0 && i%100 != 0)||i%400 ==0)
					numOfDays += 366;
				else
					numOfDays += 365;
			}
		}
		int numOfDaysd1=0;
		int numOfDaysd2=0;
		if(d1.isLeap())
			month[1] = 29;
		for(int i = 0 ; i < d1.getMonth()-1 ; i ++)
			numOfDaysd1 += month[i];
		numOfDaysd1 += d1.getDay()-1;

		if(d2.isLeap())
			month[1] = 28;
		for(int i = 0 ; i < d2.getMonth()-1 ; i ++)
			numOfDaysd2 += month[i];
		numOfDaysd2 += d2.getDay()-1;
		
		numOfDays = numOfDays - (numOfDaysd1-numOfDaysd2);
		return numOfDays;

	}
}
class assignment40
{
	public static void main(String  [] args)
	{
		Date d1 = new Date("16/09/1998");
		Date d2 = new Date(11,9,2001);
		
		System.out.println(""d1.isLeap());
		System.out.println(d1.isValid());
		System.out.println(d1.dayNumInWeek());
		d1.changeDateFormat();
	
	
		System.out.println(d2.isLeap());
		System.out.println(d2.isValid());
		System.out.println(d2.dayNumInWeek());
		d2.changeDateFormat();

		System.out.println(Date.diffDate(d1,d2));
	}

}
