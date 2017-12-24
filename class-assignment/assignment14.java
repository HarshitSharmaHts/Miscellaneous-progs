class assignment14
{
	public static void main(String [] args)
	{
		int sec_max = Integer.MIN_VALUE;
		int [] arr = new int[20];
		for(int i =0 ;i<20 ;i++)
		{
			arr[i] = (int) (Math.random()*100);
			System.out.print(arr[i] + " ");
		}
		for(int i = 0 ; i<2 ; i ++)
			for(int j = 19 ; j >= 1 ; j --)
				if(arr[j] >arr[j-1])
				{
					int temp = arr[j];
					arr[j] = arr[j-1];
					arr[j-1] = temp;
				}
		System.out.println("\nSecond largest number   :   " + arr[1]);
	}
}
