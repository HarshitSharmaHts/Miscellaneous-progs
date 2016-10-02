#include<iostream>
using namespace std;
int counter=0;
static int fl=1;
class A
{											/*class A START------------------------*/
	private:
		int size;
		int k;
	public:
		A()
		{									/*constructor A() START----------------*/
			size=0;k=0;
		}									/*A() END------------------------------*/
		void set()
		{									/*member function set() START----------*/
			cout<<"Enter the  size of array   :   ";cin>>size;
			cout<<"Enter the deletion factor  :   ";cin>>k;
		}									/*set() END----------------------------*/
		void del()
		{									/*member function del() START----------*/
			int arr[size],index=k-1;
			for(int i=0;i<size;i++)
			arr[i]=i;
			counter=size/2;
			while(counter)
			{
				if(index>size)
				{
					index=index-size;
					continue;
				}
				for(int i=index;i<size;i++)
				{
					arr[i]=arr[i+1];
				}
				size--;
				index=index+k-1;
				counter--;
			}
			for(int i=0;i<size;i++)
			cout<<arr[i]<<"  ";
			cout<<endl;
		}									/*del() END-----------------------------*/
		~A()
		{									/*destructor ~A() START-----------------*/
			cout<<"Test Case Number "<<fl<<" Completed...\n\n";
			fl++;
		}									/*~A() END------------------------------*/
};
int main()
{											/*main() START--------------------------*/
	cout<<"ENter the number of test case   :   ";int i;cin>>i;
	while(i)
	{
		A obj;
		obj.set();
		obj.del();
		i--;
	}
	return 0;
}											/*main() END----------------------------*/
