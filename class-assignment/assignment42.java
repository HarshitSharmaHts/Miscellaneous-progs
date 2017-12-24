class assignment42
{
	public static void main(String [] args)
	{
		int x = 5;
	//	int x = 5.5;    // you can not put double into int lossy conversion
		x += 3.7;       // if you use += operator than compiler will automatically do casting
	//	x = x + 3.7;    // if you use + oprator than compiler automatically promote type of x to double
		System.out.println(x);
	}
}
