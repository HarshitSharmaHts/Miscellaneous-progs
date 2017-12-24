import java.util.ArrayList;
import java.util.Arrays;
class assignment12
{
	public static void main(String [] args)
	{
		int [] arr1,arr2;
		arr1 = new int[20];
		arr2 = new int[20];
		ArrayList<Integer> flag = new ArrayList<Integer>();
		for(int i=0;i<20;i++)
		{
			arr1[i] = (int) (Math.random()*20);
			arr2[i] = (int) (Math.random()*20);
		}
		System.out.println("Array one   :   " + Arrays.toString(arr1));
		System.out.println("Array two   :   " + Arrays.toString(arr2));
		for(int i=0;i<20;i++)
			for(int j =0;j<20;j++)
				if(arr1[i] == arr2[j])
				{
					if(!flag.contains(arr1[i]))
						flag.add(arr1[i]);
				}
		System.out.println("Common ele  :   " + flag);
	}
}
