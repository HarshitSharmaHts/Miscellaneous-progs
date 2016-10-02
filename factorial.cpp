/*factorial.cpp: program to calculate the factorial of any number upto 100 using inheritance-----------------------------------------------*/

#include<iostream>
using namespace std;

void mul_arr(int [], int, int);					/*Declaration of mul_arr function--------------------------*/
void itoarr(long long int, int [], int);				/*Declaration of itoarr function---------------------------*/

class val_20							/*class val_20 START*/
{
	protected:
		long long int fact;
	public:
		val_20()						/*Constructor with zero arguement--------------------------*/
		{
			fact=2432902008176640000;
		}							/*End constructor val_20()---------------------------------*/
	
		long long int factorial_20(int);
};									/*class val_20 END*/

long long int val_20 :: factorial_20(int number)			 /*Defination of factorial_20() function START -------------*/
{
	long long int f=1;
	while(number>0)
	{
		f *= number;
		number--;
	}
	return f;
}									/*END of factorial_20() function---------------------------*/

class val_50 : public val_20					 /*Derived calss val_50 from based class val_12 START ------*/
{
		int arr50[65];
	public:
		val_50()
		{
			int i;
			for(i=0;i<65;i++)
			arr50[i]=0;
		}
		void factorial_50(int);
		void show_factorial();
};									/*class val_50 END-----------------------------------------*/

void val_50 :: factorial_50(int number)				 /*Defination of factorial_50() function START -------------*/
{
	int i=21;
	itoarr(fact, arr50, 65);
	while(i<=number)
	{
		mul_arr(arr50,i, 65);
		i++;
	}
}									/*END of factorial_50()------------------------------------*/

void val_50 :: show_factorial()					 /*show_factorial() function START -------------------------*/
{
	int i=0,j=0;
	cout<<"Factorial is   :   ";
	while(1)
	{
		if(arr50[i])
			break;
		i++;
	}
	for(j=i;j<65;j++)
	{
	cout<<arr50[j];
	}
	cout<<endl;
}									/*END of show_factorial()----------------------------------*/
class val_100 : public val_50					 /*Derived calss val_100 from based class val_12 START -----*/
{
		int arr100[158];
	public:
		val_100()
		{
			int i;
			for(i=0;i<158;i++)
			arr100[i]=0;
		}
		void factorial_100(int);
		void show_factorial_100();
};									/*END of class val_100 ------------------------------------*/
void val_100 :: factorial_100(int number)				 /*Defination of factorial_100() function START -------------*/
{
	int i=51,j,k,l=0;
	int arr[65]={3,0,4,1,4,0,9,3,2,0,1,7,1,3,3,7,8,0,4,3,6,1,2,6,0,8,1,6,6,0,6,4,7,6,8,8,4,4,3,7,7,6,4,1,5,6,8,9,6,0,5,1,2,0,0,0,0,0,0,0,0,0,0,0,0};
	for(k=0;k<157-65;k++)
	{
		arr100[k]=0;
	}
	for(j=k+1;j<158;j++)
	{
		arr100[j]=arr[l];
		l++;
	}
	while(i<=number)
	{
		mul_arr(arr100,i, 158);
		i++;
	}
}									/*END of factorial_100()------------------------------------*/

void val_100 :: show_factorial_100()				 /*show_factorial_100() function START ----------------------*/
{
	int i=0,j=0;
	cout<<"Factorial is   :   ";
	while(1)
	{
		if(arr100[i])
			break;
		i++;
	}
	for(j=i;j<158;j++)
	{
		cout<<arr100[j];
	}
	cout<<endl;
}									/*END of show_factorial_100() -------------------------------*/

int main()
{
	int i,flag=0;
	do
	{
		cout<<"Enter any number   :   ";cin>>i;
		if(i<=20)
		{
			val_20 v;
			cout<<"Factorial is   :   "<<v.factorial_20(i)<<endl;
		}	
		else if(i>20&&i<51)
		{
			val_50 v;
			v.factorial_50(i);
			v.show_factorial();
		}
		else if(i>50&&i<101)
		{
			val_100 v;
			v.factorial_100(i);
			v.show_factorial_100();
		}
		else
			cout<<"Please Enter any number between 0 and 100......\n";
		cout<<"\n+---------------------------+\n";
		cout<<"| Press 1 to continue.....  |\n";
		cout<<"| Press 0 to terminaye....  |\n";
		cout<<"+---------------------------+\n\n";
		cin>>flag;
		
	}while(flag);
}
void itoarr(long long int a, int arr[], int index)		 /*itoarr(long long,int,int) function to --------------------*/
{
	int i=index-1;
	while(a>0)
	{
		arr[i]=a%10;
		i--;
		a /= 10;
	}
}									/*itoarr function END---------------------------------------*/

void mul_arr(int arr[], int a, int index)				 /*mul_arr(int [],int,int) function START -------------------*/
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
}									/*mul_arr function END-----------------------------------------------*/
