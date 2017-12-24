import java.util.Scanner;

class assignment5
{
	public static void main(String [] args)
	{
		double sum_ev=0.0, sum_od=0.0;
		int num=0,count_ev=0, count_od=0;
		
		while(num >=0)
		{
			System.out.print("Enter number [-ve to stop]  : ");
			if(num % 2 == 0)
			{
				sum_ev +=(double) num;
				count_ev++;
			}
			else
			{
				sum_od += (double) num;
				count_od++;
			}
			Scanner sc = new Scanner(System.in);
			num = sc.nextInt();
		}
		System.out.println("Average of even number   :   " + sum_ev/(double)count_ev);
		System.out.println("Average of odd  number   :   " + sum_od/(double)count_od);

	}
}
