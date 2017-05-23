#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int len,h=0,l=0,arr[25];
	char str[25];
	cout<<"Enter any string   :   ";cin>>str;
	len=h=strlen(str);
	for(int i=0;i<len;i++)
	{						//for START
		h=1;
		for(int j=i+1;j<len;j++)
		{					// for START
			if(str[i]==str[j])
			{				//if START
				str[j]= ' ';
				h++;
			}				//if END
		}					//nested for
		if(str[i]!=' ')
		{					//if START
			arr[l]=h;
			l++;
		}					//if END
	}						//for END
	int sum=0;
	for(int g=0;g<l;g++)
	{						//for START
		if(arr[g]%2)
		arr[g]=arr[g]-1;
		sum=sum+arr[g];
	}						//for END
	cout<<"Maximum length of string which forms palindrome   :   "<<sum+1;
}							//main END
