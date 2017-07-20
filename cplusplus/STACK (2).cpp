#include<iostream>
#include<cstring>
#include<cstdlib>										/*system(" ")*/

using namespace std;

const int size=5;
static int flag=0;

//class START
class OBJECT
{
	//data members
	int i;
	char str[15];
	public:
	//member function
		friend istream & operator>>(istream & In, OBJECT &a);
		friend ostream & operator<<(ostream & Out, OBJECT &a);
		
		// > operator overloading
		int operator>(OBJECT a)
		{
		
			//while START
			while(!flag)
			{
				cout<<"+-------------------------------+\n";
				cout<<"|  Press 1 to sort by int..     |\n";
				cout<<"|  Press 2 to sort by code.     |\n";
				cout<<"+-------------------------------+\n";
				cin>>flag;
			}//END
			
				//switch START
				switch(flag)
				{
					case 1:
						return (i>a.i);
					case 2:
						int j;
						j=strcmp(str,a.str);
						if(j>0)
						return 1;
						else
						return 0;
					default:
					cout<<"you entered wrong choice..\n";
				}//END
		}//END
		
};//END

// >> operator overloading
istream & operator>>(istream & In, OBJECT &a)
{
	In>>a.i;
	In>>a.str;
	return In;
}//END

// << operator overloading
ostream & operator<<(ostream & Out, OBJECT &a)
{
	Out<<"int : "<<a.i<<endl;
	Out<<"code: "<<a.str<<endl;
	return Out;
}//END

//generic class STACK START
template <typename T>
class STACK
{
	T data[size];
	int top;
	public:
		STACK(){top=-1;}
		void push();
		void pop();
		void Display();
		void sort();
};//END

//generic member function push()
template<typename T>
void STACK<T>::push()
{
	int i;
	cout<<"Enter element   :   ";
	T temp; cin>>temp;
	if(top==size-1)
	{
		data[0]=temp;
		sort();
		return;
	}
	data[++top]=temp;
	sort();
	return;
}//END

//generic member function pop()
template<typename T>
void STACK<T>::pop()
{
	if(top==-1)
	{
		return;
	}
	cout<<"poped   :   "<<data[top--];
	cout<<"__________________________\n";
}//END

//generic member function Display()
template<typename T>
void STACK<T>::Display()
{
	for(int i=0;i<=top;i++)
	{
		cout<<data[i]<<endl;
	}
	cout<<endl;
}//END

//generic member function sort()
template<typename T>
void STACK<T>::sort()
{
	for(int i=0;i<=top;i++)
	for(int j=0;j<top;j++)
	{
		if(data[i]>data[j])
		{
			T temp;
			temp=data[i];
			data[i]=data[j];
			data[j]=temp;
		}
	}
}// END

// main function START
int main()
{
	STACK <int> s1;
		while(1)
		{
			cout<<"+---------------------+\n";
			cout<<"| Press 1 for push..  |\n";
			cout<<"| Press 2 for push..  |\n";
			cout<<"| Press 0 for exit..  |\n";
			cout<<"+---------------------+\n";
			int tr;
			cin>>tr;
			switch(tr)
			{
				//push
				case 1:
					s1.push();
					s1.Display();
					continue;
				//pop
				case 2:
					s1.pop();
					s1.Display();
					continue;
				//exit
				case 0:
					s1.Display();
					return 0;
				//again go for choice
				default:
					cout<<"please enter right choice......\n";
		}
	}	
}// END main function
