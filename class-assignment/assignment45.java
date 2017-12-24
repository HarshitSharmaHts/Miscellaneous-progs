class assignment45
{
	public static void main(String [] args)
	{
		int x = 27;		// in binary 00000000000000000000000000011011
		x = ~x;			// 1's complement of 11111111111111111111111111100100
		x =x>>>2; 		// shift bit stream 2 bits right and put 2 zeros at the right of bitstream
					// 111111111111111111111111111001 = 1073741817
		
		System.out.println (x);

		System.out.println (3 & 4);	// (011 and 100) = 000
		System.out.println (3 | 4);	// (011 or 100) = 111
		System.out.println (~ 3);	// (011 1's complement 100)
		System.out.println (3 ^ 4);	// (011 xor 100) = 111
	}
}
