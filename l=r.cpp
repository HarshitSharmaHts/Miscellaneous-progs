#include<iostream>
using namespace std;
int main()
{															/*main() START*/
	int i,l=0,r=0,left,right;
	cout<<"How many number you want to input   :   ";cin>>i;
	int arr[i];
	for(int f=0;f<i;f++)
	{										/*for START----------------*/
		cout<<"arr[ "<<f<<" ]   :   ";cin>>arr[f];
	}										/*for END------------------*/
	left=0;
	right=i-1;
	l=arr[left];
	r=arr[right];
	while(left!=right-1)
	{										/*while START--------------*/
		if(l>r)
		{									/*1 if START---------------*/
			if(arr[right-1]<0)
			{								/*2 if START---------------*/
				left++;
				l=l+arr[left];	
			}								/*2 if END-----------------*/
			else
			{								/*nested else START--------*/
				right--;
				r=r+arr[right];
			}								/*nested else END----------*/
		}
		else if(l<r)
		{									/*else if START------------*/
			if(arr[left+1]<0)
			{								/*nested if START----------*/
				right--;
				r=r+arr[right];
			}								/*nested if END------------*/
			else
			{								/*2 else START-------------*/
				left++;
				l=l+arr[left];	
			}								/*2 else END---------------*/
		}									/*else if END--------------*/
		else
		{									/*else START---------------*/
			left++;
			right--;
			l=l+arr[left];
			r=r+arr[right];
		}									/*else END-----------------*/
		
	}										/*while END----------------*/
	if(l!=r)
	{
		cout<<"\n.....Sum of left elements != Sum of right elements.....\n";
		return 0;
	}
	cout<<endl<<"left   : ( "<<arr[0];
	for(int y=1;y<=left;y++)
	{
		cout<<"+"<<arr[y];
	}
	cout<<" = "<<l<<" )"<<endl;

	cout<<endl<<"right   : ( "<<arr[right];
	for(int y=right+1;y<i;y++)
	{
		cout<<"+"<<arr[y];
	}
	cout<<" = "<<r<<" )"<<endl;
}															/*main() END*/
