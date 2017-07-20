/*
 *	Program to sort integer array (Implementation of bubble sort using do{ ... }while(..);)
 	
 	INPUT -> Number of elements in the array
 	      -> Elements of array
 	
 	OUTPUT-> Sorted array
 */

#include<iostream>
using namespace std;

void bubble(int [], int);
void print_arr(int [], int);
int scan_arr(int []);


// Start Main funtion 
int main()
{
	int arr[80];
	int n;
	n=scan_arr(arr);
	bubble(arr,n);
	cout<<"***Array after sorting***"<<endl;
	print_arr(arr,n);
	return 0;
}// End main()

// bubble sorting funtion 
void bubble(int arr[], int n)
{
	int i,j=1,flag;
	do
	{
		flag=0;
		for(i=0;i<n-j; i++)
			if(arr[i]>arr[i+1])
			{
				flag=1;
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
	j++;
	}while(flag);
}// End bubble()

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
