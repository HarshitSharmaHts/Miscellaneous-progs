/*
 *	Program to sort integer array (Implementation of quick sort )
 	
 	INPUT -> Number of elements in the array
 	      -> Elements of array
 	
 	OUTPUT-> Sorted array
 */

#include<iostream>
using namespace std;

int partition(int [], int , int);
void quick(int [], int , int);
void print_arr(int [], int);
int scan_arr(int []);


// Start Main funtion 
int main()
{
	int arr[80];
	int n;
	n=scan_arr(arr);
	quick(arr,0,n);
	cout<<"***Array after sorting***"<<endl;
	print_arr(arr,n);
	return 0;
}// End main()

// quick sorting funtion 
void quick(int arr[], int start, int end)
{
	if(start<end)
	{
		int part;
		part=partition(arr,start,end);
		quick(arr,start,part-1);
		quick(arr,part+1,end);
	}
	else return;
}// End quick()

//
int partition(int arr[], int start, int end)
{
	int l=start,r=end-1,piv=arr[start];
	while(l!=r)
	{
		while(arr[l]<piv && arr[l]!=piv)
		l++;
		while(arr[r]>piv && arr[r]!=piv)
		r--;
		if(l<r)
		{
			int temp=arr[l];
			arr[l]=arr[r];
			arr[r]=temp;
		}
	}
	return r;
}// End prtition()

// function to put values in array
int scan_arr(int arr[])
{
	int i,n;
	cout<<"Enter the number of elements   :   ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"["<<i<<"]  :  ";
		cin>>arr[i];
	}
	return n;
}// End scan_arr()

// function o display array values
void print_arr(int arr[], int n)
{
	int i;
	for(i=0;i<n;i++)
	cout<<"["<<i<<"]  :  "<<arr[i]<<endl;
	cout<<endl;
	return;
}//End print_arr()

/*
 * Author : Harshit Sharma
 */
