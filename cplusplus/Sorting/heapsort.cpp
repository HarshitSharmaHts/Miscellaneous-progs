/*
 *	Program to sort integer array (Implementation of heap sort)
 	
 	INPUT -> Number of elements in the array
 	      -> Elements of array
 	
 	OUTPUT-> Sorted array
 */

#include<iostream>
using namespace std;

void print_arr(int [], int);
int scan_arr(int []);
void heapify(int [], int, int);
void buildheap(int [], int);
void heapsort(int [], int);

// Start Main funtion 
int main()
{
	int arr[80];
	int n;
	n=scan_arr(arr);
	heapsort(arr,n);
	cout<<"***Array after sorting***"<<endl;
	print_arr(arr,n);
	return 0;
}// End main()

//heapify
void heapify(int arr[], int heap_size, int parent)
{
	int l_child,r_child,largest;
	l_child=2*parent+1;
	r_child=2*parent+2;
	if(arr[parent]<arr[l_child] && l_child<=heap_size)
		largest=l_child;
	else
		largest=parent;
	if(arr[largest]<arr[r_child] && r_child<=heap_size)
		largest=r_child;
	if(largest!=parent)
	{
		int temp=arr[largest];
		arr[largest]=arr[parent];
		arr[parent]=temp;
		heapify(arr,heap_size,largest);
	}
	return;
}// heapify()

// buildheap function to convert an array into max heap
void buildheap(int arr[], int heap_size)
{
	int i,max=heap_size/2;
	for(i=max;i>=0;i--)
	{
		heapify(arr,heap_size-1,i);
	}
	return;
}// End buildheap()

// heapsort function to sort an array
void heapsort(int arr[], int heap_size)
{
	buildheap(arr,heap_size);
	int i,size;
	size=heap_size-1;
	for(i=size;i>=0;i--)
	{
		int temp=arr[0];
		arr[0]=arr[size];
		arr[size]=temp;
		size--;
		heapify(arr,size,0);
	}
	return;
}// End heapsort()

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

