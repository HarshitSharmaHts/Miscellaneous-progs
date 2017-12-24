class assignment6
{
	public static void main(String []args)
	{
		int num = 0;
		while(true)
		{
			num++;
			if(num == 1002)
				return;
			if(num % 7 == 0 || num % 11 == 0)
				continue;
			System.out.println(num);
		}
	}
}

