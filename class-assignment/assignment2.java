import java.math.BigInteger;
class assignment2
{
	public static void main(String [] args)
	{
		BigInteger fact = new BigInteger("1");
		for(int i = 1 ; i <= 1001 ; i ++)
			fact = fact.multiply(new BigInteger(Integer.toString(i)));
		System.out.println("Total number of digits in the expansion of 1001!   :   " + fact.toString().length());
		System.out.println("Total number of terminal zeros in 1001!            :   " + countTerminalZero(1001));
	}
	static int countTerminalZero(int num)
	{
	    if(num == 0)
	        return 0;
	    return (num/5)+ countTerminalZero(num/5);
	}
}
