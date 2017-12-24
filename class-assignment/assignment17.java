import java.util.Scanner;
class assignment17
{
	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("How many odd number you want to store ? ");
		int n = sc.nextInt();
		int [] arr = new int [n];
		for(int i = 0 ; i < n ; i ++)
			arr[i] = 2*i + 1;
		for(int i = 0 ; i < n ; i ++)
			System.out.print(arr[i] + " ");
		System.out.println();
	}
}

