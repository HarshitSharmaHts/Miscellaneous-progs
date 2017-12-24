class assignment1
{
	public static void main(String [] args)
	{
		double x=-3.0,y=-5.0,z;
		double min=Double.MAX_VALUE, max=Double.MIN_VALUE;
		String str = "";
		for(x=-3.0;x<=4.0;x=x+0.1)
		{
			for(y=-5.0;y<=6.0;y=y+0.2)
			{
				z=value_z(x,y);
				if(z<min)
					min=z;
				if(z>max)
					max=z;
				str = String.format("x   :   %.2f, y   :   %.2f, z   :   %.2f",x,y,z);
				System.out.println(str);
			}
		}
		str = String.format("(MAX) z   :   %.2f\n(MIN) z   :   %.2f",max,min);
		System.out.println(str);

	}
	static double value_z(double x, double y)
	{
		return ((x*x*x*x) + (x*x*x*y) + (x*x*y*y) + (x*y*y*y) + (y*y*y*y));
	}
}
