import java.util.Scanner;

class assignment25
{
	public static void main(String [] args)
	{
		while(true)
		{
			System.out.println();
			System.out.println("Enter 1 to evaluation..");
			System.out.println("Enter 2 to exit..");

			Scanner sc = new Scanner(System.in);
			int a=0,b=0,c=0;
			System.out.print("Enter your choice   :   ");
			int choice=sc.nextInt();
			if(choice == 2)
				return;
			System.out.print("Enter coefficient (a)   :   ");
			a = sc.nextInt();
			System.out.print("Enter coefficient (b)   :   ");
			b = sc.nextInt();
			System.out.print("Enter coefficient (c)   :   ");
			c = sc.nextInt();
	
			if(b*b <= 4*a*c)
			{
				System.out.println("b*b > 4*a*c must satisfy ..");
				continue;
			}
			float root1 = (float)((-b + Math.sqrt(b*b - 4*a*c))/(2*a));
			float root2 = (float)((-b - Math.sqrt(b*b - 4*a*c))/(2*a));
	
			System.out.println("First root of equation     :   " + root1);
			System.out.println("Second root of equation    :   " + root2);
		}
	}
}
