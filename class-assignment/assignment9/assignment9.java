import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.InputStreamReader;

class assignment9
{
	public static void main(String [] args) throws Exception
	{
		InputStreamReader fin = new InputStreamReader(new FileInputStream("marks.dat"));
		BufferedReader br = new BufferedReader(fin);

		String marks;

		int val;
		int count_A=0, count_B=0, count_C=0, count_D=0, count_F=0;

		while((marks=br.readLine()) != null)
		{
			val = Integer.parseInt(marks);
			if(val >= 90)
			{
				count_A ++;
				continue;
			}
			if(val >= 80)
			{
				count_B ++;
				continue;
			}
			if(val >= 65)
			{
				count_C ++;
				continue;
			}
			if(val >= 50)
			{
				count_D ++;
				continue;
			}
			count_F ++;
		}
		System.out.println("Number of student who received A   :   " + count_A);
		System.out.println("Number of student who received B   :   " + count_B);
		System.out.println("Number of student who received C   :   " + count_C);
		System.out.println("Number of student who received D   :   " + count_D);
		System.out.println("Number of student who received F   :   " + count_F);

		System.out.println((100.0*count_A/(count_A+count_B+count_C+count_D+count_F)) + "% student got A");
		System.out.println((100.0*count_B/(count_A+count_B+count_C+count_D+count_F)) + "% student got B");
		System.out.println((100.0*count_C/(count_A+count_B+count_C+count_D+count_F)) + "% student got C");
		System.out.println((100.0*count_D/(count_A+count_B+count_C+count_D+count_F)) + "% student got D");
		System.out.println((100.0*count_F/(count_A+count_B+count_C+count_D+count_F)) + "% student got F");
		br.close();
	}
}
