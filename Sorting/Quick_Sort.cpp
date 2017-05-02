/*
 *	Program to sort integer array (Implementation of quick sort;)
 	
 	INPUT -> Number of elements in the array
 	      -> Elements of array
 	
 	OUTPUT-> Sorted array
 */

#include<iostream>
#include<cstdlib>
using namespace std;

int partition(int [], int , int);
void quick_sort(int [], int,int);
void print_arr(int [], int);
int scan_arr(int []);


// Start Main funtion 
int main()
{
	int arr[80];
	int n;
	n=scan_arr(arr);
	quick_sort(arr,0,n);
	cout<<"***Array after sorting***"<<endl;
	print_arr(arr,n);
	return 0;
}// End main()

// partition function to place pivot at it's final index
int partition(int arr[], int start, int end)
{
	int l=start;
	int r=end-1;
	int piv_index=start+rand()%(end-start);						// taking random pivot index between start index and end index 
	int pivot=arr[piv_index];
	while(l<r)
	{
		while(arr[l]<pivot)
		l++;
		while(arr[r]>pivot)
		r--;
		if(arr[l]==arr[r])
		{
			if(arr[l]==pivot)
			l++;
			else if(arr[r]==pivot)
			r--;
			else
			{
				l++;
				r--;
			}
		}
		if(l<r)
		{
			int temp=arr[l];
			arr[l]=arr[r];
			arr[r]=temp;
		}
	}
	return r;
}// End partition();

// quick_sort
void quick_sort(int arr[], int start,int end)
{
	if(start<end)
	{
		int part=partition(arr,start,end);
		quick_sort(arr,start,part);
		quick_sort(arr,part+1,end);
	}
	return;
}// End quick_sort();

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
