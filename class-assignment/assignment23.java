import java.util.Scanner;

class query
{
	int zeros;
	int ones;

	query(int x, int y)
	{
		zeros = x;
		ones = y;
	}

	int getNumZeros()
	{
		return zeros;
	}

	int getNumOnes()
	{
		return ones;
	}

}

public class assignment23
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		String str = sc.nextLine();
		query qry = setNum(str);
		System.out.println("Number of Zeros  :  " + qry.getNumZeros());
		System.out.println("Number of Ones   :  " + qry.getNumOnes());

	}

	static query setNum(String val)
	{
		int countZeros=0;
		int countOnes=0;
		for(int i =0; i<val.length(); i ++)
		{
			if(val.charAt(i) == '1')
				countOnes++;
			else if(val.charAt(i) == '0')
				countZeros++;
		}
		query th = new query(countZeros, countOnes);
		return th;
	}
}
