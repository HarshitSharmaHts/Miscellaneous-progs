class assignment24
{
	public  static void main(String [] args)
	{
		int result=0;
		if(args.length == 0)
		{
			System.out.println("Error : argument list to main is empty..");
			return;
		}
		for(String val : args)
		{
			int co = val.length();
			result = result*10 + co;
		}
		System.out.println(result);
	}
}
