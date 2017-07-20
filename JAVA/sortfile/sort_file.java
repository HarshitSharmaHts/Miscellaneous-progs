/**
 *sort_file.java program to display Sortfile.txt file data in sorted manner
 *
 *Sortfile.txt data must be in (String)/(String)/(int) pattern
 *
 **/

import java.util.*;
import java.io.*;

//class st_data to hold name, enroll and rank of student

class st_data
{
	String name;
	String enroll;
	int rank;

	st_data(String n, String e, int r)
	{
		name=n;
		enroll=e;
		rank=r;
	}

	public String getName()
	{
		return name;
	}

	public String getEnroll()
	{
		return enroll;
	}

	public int getRank()
	{
		return rank;
	}

	public String toString()
	{
		String ret = ("\n"+name+" "+enroll+" "+" "+rank+"\n");
		return ret;
	}
}
//

// public class sort_file START

public class sort_file
{
	ArrayList<st_data> s_list = new ArrayList<st_data>();

	public static void main(String[] args)
	{
		sort_file obj=new sort_file();
		obj.go();
	}

	public void go()
	{
		getSt_data();
		System.out.println("**Unsorted**\n"+s_list);
		Collections.sort(s_list,new sort_by_rank());
		System.out.println("** Sorted **\n"+s_list);
	}
	
	// inner class sort_by_name to override compare function to compare objects by name
	class sort_by_name implements Comparator<st_data>
	{
		public int compare(st_data one, st_data two)
		{
			return one.getName().compareTo(two.getName());
		}
	}

	
	// inner class sort_by_name to override compare function to compare objects by rank
	class sort_by_rank implements Comparator<st_data>
	{
		public int compare(st_data one, st_data two)
		{
			return (one.getRank() - two.getRank());
		}
	}
	
	//getter function to get data from file line by line
	void getSt_data()
	{
		try
		{
			File file=new File("Sortlist.txt");
			BufferedReader reader = new BufferedReader(new FileReader(file));
			String line=null;
			while((line=reader.readLine())!=null)
			{
				addSt_data(line);
			}
		}

		catch(Exception ex)
		{
			ex.printStackTrace();
		}
	}
	
	//
	void addSt_data(String dummy)
	{
		String[] tokens = dummy.split("/");
		int token2= Integer.parseInt(tokens[2]);
		st_data dum = new st_data(tokens[0],tokens[1],token2);
		s_list.add(dum);
	}
}//End sort_file

/**
 *
 *	Author: Harshit Sharma :)
 *
 **/