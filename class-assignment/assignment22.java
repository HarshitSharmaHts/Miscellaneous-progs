import java.util.*;
class assignment22
{
	public static void main(String [] args)
	{
		Integer [] arr = new Integer [50];
	       	for(int i = 0 ; i < 50 ; i ++)
			arr[i] =(int)(Math.random()*100);
		System.out.println("****UnSorted Array****");
		System.out.println(Arrays.toString(arr));

		Arrays.sort(arr,new sort_des());
		
		System.out.println("**** Sorted Array ****");
		System.out.println(Arrays.toString(arr));
	}
	static class sort_des implements Comparator<Integer>
	{
		public int compare(Integer a, Integer b)
		{
			return b.compareTo(a);
		}
	}
}
