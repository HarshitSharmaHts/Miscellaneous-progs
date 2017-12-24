class assignment18
{
	public static void main(String [] args)
	{
		double largest = Double.MIN_VALUE, smallest = Double.MAX_VALUE;
		double avg = 0.0;
		for( String var : args)
		{
			double temp = Double.parseDouble(var);
			if(temp > largest)
				largest = temp;
			if(temp < smallest)
				smallest = temp;
			avg += temp;
		}
		System.out.println("Largest    :   " + largest + "\nSmallest   :   " + smallest + "\nAverage    :   " + avg/args.length);
	}
}
