class assignment19
{
	public static void main(String [] args)
	{
		String str= "";
		int len = str.length();
		for(String var : args)
		{
			if(var.length() > len)
			{
				str = var;
				len = var.length();
			}
			else if(var.length() == len)
			{
				str = str + "\n" + var;
			}
		}
		System.out.println("***longest word in argument list***");
		System.out.println(str);
	}
}
