import java.util.Scanner;
class assignment11
{
	public static void main(String [] args)
	{
		int max = Integer.MIN_VALUE;
		int min = Integer.MAX_VALUE;
		int val=0,count_ev=0,count_od=0,val_ev=0,val_od=0;
		while(true)
		{
			Scanner sc = new Scanner(System.in);
			val = sc.nextInt();
			if(val <0)
				break;
			if(val > max)
				max = val;
			if(val < min)
				min = val;
			if(val % 2 == 0)
			{
				val_ev += val;
				count_ev++;
			}
			if(val % 2 != 0)
			{		
				val_od += val;
				count_od++;
			}
		}
		System.out.println("Max number   :   " + max);
		System.out.println("Min number   :   " + min);
		System.out.println("Avg of Even numbers   :   " + (1.0*(val_ev/count_ev)));
		System.out.println("Avg of Odd numbers    :   " + (1.0*(val_od/count_od)));
	}
}
