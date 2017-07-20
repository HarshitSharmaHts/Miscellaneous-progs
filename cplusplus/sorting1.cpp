/*-------------------------------program to sort float, int, char and student data-----------------------------*/
#include<iostream>								//including streams
#include<string.h>								// for strcmp() function;
#include<cstdlib>								//for system() function;
#define MAX_BUF 5
static int flag=1;
static int a=0;

using namespace std;

class Name									// class Name START
{
	char str[25];
	int roll;
	int year;
	char dept[4];
	public:
		int operator > (Name n);		
		friend istream & operator>>(istream &In, Name &a);
		friend ostream & operator<<(ostream &Out, Name &a);
};										// class Name END

int Name :: operator > (Name n)							// operator overloding for " > "
{
	while(!a)
        {
                cout<<"Enter the choice to sort object..\n";
		cout<<"+----------------------------+\n";
                cout<<"| PRESS 1 to sort by name... |\n";
                cout<<"| PRESS 2 to sort by roll... |\n";
                cout<<"| PRESS 3 to sort by year... |\n";
                cout<<"| PRESS 4 to sort by dept... |\n";
		cout<<"+----------------------------+\n";
                flag=0;
                cin>>a;
		system("clear");
        }
        switch(a)
        {
        	case 1:
                	int b;
               	        b=strcmp(str,n.str);
               	        return ( b>0?1:0 );
               	case 2:
               	        return (roll>n.roll);
               	case 3:
               	        return (year>n.year);
               	case 4:
                        int k;
               	        k=strcmp(dept,n.dept);
             	        return ( k>0?1:0 );            
 	}
}

istream & operator>>(istream &In, Name &a)					// >> operator overloading
{
        cout<<"Name : ";
	In>>a.str;
        cout<<"roll : ";
	In>>a.roll;
        cout<<"year : ";
	In>>a.year;
        cout<<"dept : ";
	In>>a.dept;

	return In;
}
ostream & operator<<(ostream &Out, Name &a)					// << operator overloading
{
        cout<<"Name : ";
	Out<<a.str<<endl;
        cout<<"roll : ";
	Out<<a.roll<<endl;
        cout<<"year : ";
	Out<<a.year<<endl;
        cout<<"dept : ";
	Out<<a.dept<<endl;
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
	system("clear");
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
}
										// generic function END
void do_sort( int a[MAX_BUF] )							// do_sort function for integers sorting START
{
	for(int i=0;i<MAX_BUF;i++)
	{
		cout<<"Element : ";
		cin>>a[i];
	}
	for(register int i=0;i<MAX_BUF;i++)					// sorting START
	for(register int j=i+1;j<MAX_BUF;j++)
	{
		if( a[i]<a[j] )
		{
			int temp;
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
}
	
int main()									// main() START
{
	int j;
	cout<<"Enter the number of trials   :   ";cin>>j;			// number of trials
	while(j)
	{
		flag=1;
		a=0;
	        cout<<"+----------------------------------+\n";
		cout<<"| PRESS 0 to Exit..........        |\n";				//menu for sort type
		cout<<"| PRESS 1 to sort int......        |\n";
		cout<<"| PRESS 2 to sort char.....        |\n";
		cout<<"| PRESS 3 to sort student data.....|\n";
		cout<<"| PRESS 4 to sort float....        |\n";
		cout<<"+----------------------------------+\n";
		int i;
		cin>>i;
		system("clear");
		switch(i)
		{
			case 0:
				cout<<"Thank you.....";
                                return 0;
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
			case 4:
				float f[MAX_BUF];
				do_sort(f);
				continue;
			default:
				cout<<"Please! Try again with valid option.....\n";
				j++;
		}
	j--;
	}
}										// main() END
