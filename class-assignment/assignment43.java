class assignment43
{
	public static void main(String [] args)
	{
		int x = (int)1.8;		// x has value of 1
		/**
		 * round function do roundof of numbers like 1.4 = 1 , 1.8 = 2
		 */
		long l = Math.round(1.8);	// if you pass double value in Math.round function than it'll return long
		int y = Math.round(1.8f);	// if you pass float value in Math.round function than it'll return int
		System.out.println(x);
		System.out.println(y);
	}
}
/**
 * Overloading of function round in java.lang.Math;
 * static long round(double val);
 * static int round(float val);
 */
