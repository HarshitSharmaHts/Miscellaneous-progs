#include<iostream>
using namespace std;

void mul_arr(int [], int, int);
void factorial(int);
class val_20
{
	public:
		friend void factorial(int);
};
class val_50
{
	int arr[65];
	public:
		val_50()
		{
			int j=0;
			for(j=0;j<65;j++)
			arr[j]=0;
			long long int fact=2432902008176640000;
			int i=64;
			while(fact>0)
			{
				arr[i]=fact%10;
				i--;
				fact /= 10;
			}
		}
		friend void factorial(int);
};
class val_100
{
	int arr[158];
	public:
		val_100()
		{
			int i,j,k=0;
			int arr1[65]={3,0,4,1,4,0,9,3,2,0,1,7,1,3,3,7,8,0,4,3,6,1,2,6,0,8,1,6,6,0,6,4,7,6,8,8,4,4,3,7,7,6,4,1,5,6,8,9,6,0,5,1,2,0,0,0,0,0,0,0,0,0,0,0,0};
			for(i=0;i<158-65;i++)
			{
				arr[i]=0;
			}
			for(j=i;j<158;j++)
			{
				arr[j]=arr1[k];
				k++;
			}
		}
		friend void factorial(int);
};
int main()
{
	int i;
	cout<<"Enter any number   :    ";cin>>i;
	factorial(i);
	cout<<"+---------------------------------+\n";
	cout<<"| Press 1 to continue......       |\n";
	cout<<"| Press 0 to terminate.....       |\n";
	cout<<"+---------------------------------+\n";
	cin>>i;
	if(!i)
		return 0;
	main();

}
void factorial(int number)
{
	if(number>=0 && number<21)
	{
		long long int f=1;
		while(number>0)
		{
			f *= number;
			number--;
		}
		cout<<"Factorial is   :   "<<f<<endl;
	}
	else if(number > 20 && number<51)
	{
		int i=0,j,k=21;
		val_50 temp;
		while(k<=number)
		{
			mul_arr(temp.arr,k, 65);
			k++;
		}
		cout<<"Factorial is   :   ";
		while(1)
		{
			if(temp.arr[i])
				break;
			i++;
		}
		for(j=i;j<65;j++)
		{
			cout<<temp.arr[j];
		}
		cout<<endl;
	}
	else if(number > 50 && number<101)
	{
		int i=0,j,k=51;
		val_100 temp;
		while(k<=number)
		{
			mul_arr(temp.arr,k, 158);
			k++;
		}
		i=0;
		cout<<"Factorial is   :   ";
		while(1)
		{
			if(temp.arr[i])
				break;
			i++;
		}
		for(j=i;j<158;j++)
		{
			cout<<temp.arr[j];
		}
		cout<<endl;
	}
	else
	cout<<"Please enter number between 0-100.....\n";
}
void mul_arr(int arr[], int a, int index)
{
	int i, temp=0;
	for(i=index-1;i>=0;i--)
	{
		arr[i] = arr[i]*a + temp;
		temp=0;
		if(arr[i]>9)
		{
			temp=arr[i]/10;
			arr[i] %=10;
		}
	}
}
