/*
 *	Program to sort integer array (Implementation of selection sort)
 	
 	INPUT -> Number of elements in the array
 	      -> Elements of array
 	
 	OUTPUT-> Sorted array
 */

#include<iostream>
using namespace std;

void selection(int [], int);
void print_arr(int [], int);
int scan_arr(int []);


// Start Main funtion 
int main()
{
	int arr[80];
	int n;
	n=scan_arr(arr);
	selection(arr,n);
	cout<<"***Array after sorting***"<<endl;
	print_arr(arr,n);
	return 0;
}// End main()

// selection sorting funtion 
void selection(int arr[], int n)
{
	int i,j;
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	{
		if(arr[i]>arr[j])
		{
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
}// End selection()

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
