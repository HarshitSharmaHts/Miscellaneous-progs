/*
 *	Program to sort integer array (Implementation of insertion sort)
 	
 	INPUT -> Number of elements in the array
 	      -> Elements of array
 	
 	OUTPUT-> Sorted array
 */

#include<iostream>
using namespace std;

void insertion(int [], int);
void print_arr(int [], int);
int scan_arr(int []);


// Start Main funtion 
int main()
{
	int arr[80];
	int n;
	n=scan_arr(arr);
	insertion(arr,n);
	cout<<"\n***Array after sorting***"<<endl;
	print_arr(arr,n);
	return 0;
}// End main()

// insertion sorting funtion 
void insertion(int arr[], int n)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}// End insertion()

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
