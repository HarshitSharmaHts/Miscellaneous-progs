//program to sort float, int, char, name
#include<iostream>								//including streams
#include<string.h>								// for strcmp function
#include<cstdlib>								// for exit(1) function
#define MAX_BUF 5

using namespace std;

class Name									// class Name START
{
	char str[25];								// string data member
	public:
		int operator > (Name n)						// operator overloding for " > "
		{
			int k;
			k=strcmp(str,n.str);					// strcmp( , ) function call
			return ( k>0?1:0 );
		}
		friend istream & operator>>(istream &In, Name &a);
		friend ostream & operator<<(ostream &Out, Name &a);
};										// class Name END

istream & operator>>(istream &In, Name &a)					// >> operator overloading
{
	In>>a.str;
	return In;
}
ostream & operator<<(ostream &Out, Name &a)					// << operator overloading
{
	Out<<a.str;
	return Out;
}

template < typename U >								// template START
void do_sort( U a[MAX_BUF] )							// do_sort generric function START
{
	for(int i=0;i<MAX_BUF;i++)
	{
		cout<<"Element : ";
		cin>>a[i];
	}
	for(register int i=0;i<MAX_BUF;i++)					// sorting START
	for(register int j=i+1;j<MAX_BUF;j++)
	{
		if( a[i]>a[j] )
		{
			U temp;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}									// sorting END
	cout<<"******  After Sorting  ******"<<endl;
	for(int j=0;j<MAX_BUF;j++)
	{
		cout<<"\nElement : ";
		cout<<a[j];
	}
	cout<<endl;
}										// generic function END

int main()									// main() START
{
	int j;
	cout<<"Enter the number of trials   :   ";cin>>j;			// number of trials
	while(j)
	{
		cout<<"\nPRESS 0 to Exit....\n";				//menu for sort type
		cout<<"PRESS 1 to sort int....\n";
		cout<<"PRESS 2 to sort char...\n";
		cout<<"PRESS 3 to sort name...\n";
		int i;
		cin>>i;
		switch(i)
		{
			case 0:
				cout<<"Thank you.....";
				exit(1);					// exit(1) function call
			case 1:
				int a[MAX_BUF];
				do_sort(a);
				continue;
			case 2:
				char c[MAX_BUF];
				do_sort(c);
				continue;
			case 3:
				Name n[MAX_BUF];
				do_sort(n);
				continue;
			default:
				cout<<"Please! Try again with valid option.....\n";
				j++;
		}
	j--;
	}
}										// main() END
