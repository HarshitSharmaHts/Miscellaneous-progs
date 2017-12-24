import java.math.BigInteger;
class assignment41
{
	public static void main(String [] args)
	{
		BigInteger num =new BigInteger(Integer.toString(4444));
		num = num.pow(4444);
		String str = num.toString();
		int ret=0;
		for(int i = 0 ; i < str.length() ; i ++)
			ret += (str.charAt(i) - '0');
		System.out.println("Sum of digits in 4444^4444  :  " + ret);
	}
}
