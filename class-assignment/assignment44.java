class assignment44
{
	public static void main(String[] args)
	{
		int n = 27; 		// 11011 in binary
		n=(n>>3);		// 11 in binary
		System.out.println(Integer.toBinaryString(n));
		System.out.println ((n & (1 << 3)) >> 2);
		/**
		 * (1 << 3)  :  1000
		 * (n & (1 << 3) -> (0011 and 1000) : 0000
		 * (n & (1 << 3) >> 2) -> (0 >> 2) : 0
		 * output 0
		 */
	}
}
