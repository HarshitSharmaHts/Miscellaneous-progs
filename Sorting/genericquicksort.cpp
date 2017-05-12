/*
 * Program to implement generic quick sort
 * Inputs -->
 	1. -> Number of trails you want to check
 	2. -> Values of array
 * Output -->
 	1. -> Sorted array
 *
 */

//including streams
#include<iostream>
#include<string.h>
#include<cstdlib>
const int n=10;
using namespace std;

// class Name START
class Name
{
	//string with 30 maximum characters
	char str[30];
	public:
		// operator overloding for " > "
		int operator > (Name n)
		{
			int k;
			k=strcmp(str,n.str);
			return ( k>0?1:0 );
		}// End overloading
		
		// operator overloding for " < "
		int operator < (Name n)
		{
			int k;
			k=strcmp(str,n.str);
			return ( k<0?1:0 );
		}// End overloading
		
		// operator overloding for " == "
		int operator == (Name n)
		{
			int k;
			k=strcmp(str,n.str);
			return ( k==0?1:0 );
		}// End overloading
		
		friend istream & operator>>(istream &In, Name &a);
		friend ostream & operator<<(ostream &Out, Name &a);
		
};// class Name END

/* Prototypes for generic functions */

template < typename U >
void print( U [], int);
template < typename U >
void scan( U [], int);
template < typename U >
void driver( U [], int);
template < typename U >
int partition( U [], int, int);
template < typename U >
void quick_sort( U [], int, int);


int main()
{
	int j;
	cout<<"Enter the number of trials   :   ";cin>>j;
	while(j)
	{
		cout<<"\nPRESS 0 to Exit....\n";				//menu for sort type
		cout<<"PRESS 1 to sort integers\n";
		cout<<"PRESS 2 to sort characters\n";
		cout<<"PRESS 3 to sort names\n";
		int i;
		cin>>i;
		switch(i)
		{
			case 0:
				cout<<"Thank you.....";
				exit(1);
			case 1:
				int a[n];
				driver(a,n);
				continue;
			case 2:
				char c[n];
				driver(c,n);
				continue;
			case 3:
				Name name[n];
				driver(name,n);
				continue;
			default:
				cout<<"Please! Try again with valid option.....\n";
				j++;
		}
	j--;
	}
}// main() END

// >> operator overloading
istream & operator>>(istream &In, Name &a)
{
	In>>a.str;
	return In;
}// End overloading

// << operator overloading
ostream & operator<<(ostream &Out, Name &a)
{
	Out<<a.str;
	return Out;
}// End overloading

// generic function to display items of array
template < typename U >
void print( U a[] ,int n )
{
	for(int j=0;j<n;j++)	
	{
		cout<<"\nElement : ";
		cout<<a[j];
	}
	cout<<endl;
}// End of print generic

// generic function to scan items for array
template < typename U >
void scan( U a[] ,int n )
{			
	for(int i=0;i<n;i++)
	{
		cout<<"Element : ";
		cin>>a[i];
	}
}// End of scan generic

// generic partition function
template < typename U >
int partition(U arr[], int start, int end)
{
	int l=start;
	int r=end-1;
	int piv_index=start+rand()%(end-start);
	U pivot=arr[piv_index];
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
			U temp=arr[l];
			arr[l]=arr[r];
			arr[r]=temp;
		}
	}
	return r;
}// End of partition generic

// generic quick_sort function
template <typename U>
void quick_sort(U arr[], int start,int end)
{
	if(start<end)
	{
		int part=partition(arr,start,end);
		quick_sort(arr,start,part);
		quick_sort(arr,part+1,end);
	}
	return;
}// End of quick_sort generic

// generic driver function function
template < typename U >
void driver(U arr[], int n)
{
	scan(arr,n);
	quick_sort(arr,0,n);
	print(arr,n);
	return;
}// End of driver generic

/*
 *Author : Harshit Sharma
 */
