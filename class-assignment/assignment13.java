class assignment13
{
	public static void main(String [] args)
	{
		int[] arr1 = new int[20];
		int[] arr2 = new int[20];
		int[] arr3 = new int[40];

		System.out.println("arr1 | arr2");
		for(int i = 0 ; i<20 ; i ++)
		{
			arr1[i] = (int) (Math.random()*20);
			arr2[i] = (int) (Math.random()*30);
			String str = String.format("%4d | %4d",arr1[i],arr2[i]);
			System.out.println(str);
		}
		for(int i = 0,j=0 ; i<40 ; i+=2,j++)
		{
			arr3[i] = arr1[j];
			arr3[i+1] = arr2[j];
		}
		System.out.println("\n\narr3");
		for(int i=0;i<40;i++)
			System.out.println(String.format("%3d",arr3[i]));
	}
}

