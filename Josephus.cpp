#include <iostream>
using namespace std;
static int counter=1;
class jos
{
	private:
		int max;
		int k;
	public:
		jos()
		{ max=0;k=0; }
		int set_data()
		{
			cout<<"*********************************************\n";
			cout<<"\n+-----------------------------------\n";
			cout<<"| Enter the size of cycle   :   ";cin>>max;
			cout<<"| ENter the leavefactor   :   ";cin>>k;
			cout<<"+-----------------------------------\n";
		}
		int josephus()
		{
			int a=1;
			for(int i=1;i<=max;i++) 
			{
				a=(a+k-1)%i+1;
			}
			return a;
		}
		void show()
		{
			cout<<"+-----------------------------------+\n";
			cout<<"| Safe number is   :   "<<josephus()<<endl;
			cout<<"+-----------------------------------+\n";
		}
		~jos()
		{cout<<counter<<" test completed.....\n";counter++;}
};
int main()
{
	int ca;
	cout<<"Enter the number of test case   :   ";cin>>ca;
	while(ca)
	{
		jos obj;
		obj.set_data();
		obj.show();
		ca--;
	}
	return 0;
}
/*


#include <stdio.h>
 
int josephus(int n, int k)
{
  if (n == 1)
    return 1;
  else
   
    return (josephus(n - 1, k) + k-1) % n + 1;
}
 
// Driver Program to test above function
int main()
{
  int n = 14;
  int k = 2;
  printf("The chosen place is %d", josephus(n, k));
  return 0;
}



*/
