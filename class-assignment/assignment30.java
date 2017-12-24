import java.util.Arrays;
class assignment30
{
	public static void main(String[] args)
	{
		int [] arr = new int[20];
		for(int i=0 ; i < 20 ; i ++)
			arr[i] = (int)(Math.random()*2);
		System.out.println(Arrays.toString(arr));
		System.out.println("Decimal    :   " + decimalValue(arr));
	}
	static long decimalValue(int ar[])
	{
		long dec=0;
		int j = 0;
		for( int i = ar.length-1 ; i  >= 0 ; i --)
		{
			dec +=(int) ar[i]*(Math.pow(2,j));
					j++;
		}

		return dec;
	}
}
