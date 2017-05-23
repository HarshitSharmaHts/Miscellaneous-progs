#include<iostream>
using namespace std;

class Complex
{																		/*class Complex START*/
	private:
		double real;
		double image;

	public:
		Complex(double rel=0, double imag=0)							/*constructor START*/
		{
			real=rel;
			image=imag;
		}																/*constructor END*/
		Complex & operator*(int val)								/*complex * int */
		{
			static Complex temp;
			temp.real=real*val;
			temp.image=image*val;
			return temp;
		}
		
		Complex & operator+(Complex a)								/*complex + complex*/
		{
			static Complex temp;
			temp.real=real+a.real;
			temp.image=image+a.image;
			return temp;
		}
		
		Complex & operator+(int val)								/*complexx + int*/
		{
			static Complex temp;
			temp.real=real+val;
			temp.image=image;
			return temp;
		}
		Complex & operator-(Complex a)								/*complex - complex*/
		{
			static Complex temp;
			temp.real=real-a.real;
			temp.image=image-a.image;
			return temp;
		}
		
		Complex & operator-(int val)								/*complex - int*/
		{
			static Complex temp;
			temp.real=real-val;
			temp.image=image;
			return temp;
		}
		Complex & operator/(int val)								/*complex / int*/
		{
			static Complex temp;
			temp.real=real/val;
			temp.image=image/val;
			return temp;
		}
		Complex & operator++();										/*pre increment*/
		Complex & operator++(int);									/*post increment*/
		friend Complex & operator*(Complex a, Complex b);				/*complex * complex*/
		friend Complex & operator*(int val, Complex a);					/*int * complex*/
		friend istream & operator>>(istream &In, Complex &a);			/* >> operator overloading*/
		friend ostream & operator<<(ostream &Out, Complex &a);			/* << operator overloading*/
};
istream & operator>>(istream &In, Complex &a)							/* >> defination*/
{
	cout<<"real   :   ";
	In>>a.real;
	cout<<"image  :   ";
	In>>a.image;
	return In;
}
ostream & operator<<(ostream &Out, Complex &a)							/* << defination*/
{
	int i;
	if(a.image>0)
	Out<<a.real<<"+"<<a.image<<"i";
	else
	{
		Out<<a.real<<a.image<<"i";
	}
	return Out;
}
Complex & Complex::operator++()											/*pre increment defination*/
{
	static Complex com;
	com.image=image;
	real++;
	com.real=real;
	return com; 
}
Complex & Complex::operator++(int)										/*post increment defination*/
{
	static Complex old;	
	old.real=real;
	old.image=image;
	real=real+1;
	return old;
}
Complex & operator*(int val, Complex a)									/*int * complex defination*/
{
	static Complex temp;
	temp.real=a.real*val;
	temp.image=a.image*val;
	return temp;
}
Complex & operator*(Complex a, Complex b)								/*complex * complex*/
{
	static Complex temp;
	temp.real=(a.real*b.real)-(a.image*b.image);
	temp.image=(a.real*b.image)+(a.image*b.real);
	return temp;
}
int main()																/*main() START*/
{
	Complex c1,c2,c3,c4;
	cout<<"\nc1   :   \n";
	cin>>c1;
	cout<<"\nc2   :   \n";
	cin>>c2;
	cout<<"\nc3   :   \n";
	cin>>c3;
	cout<<"\nc4   :   \n";
	cin>>c4;
	cout << "***********output**************\n";
	cout << "\n+++++++++++++++++++++++++++++++++++++++++++++++";
	cout << "\n| c1*c2*c3                      :   " << c1*c2*c3;
	cout << "\n| (c1 * c2 * c3) + c4           :   " << (c1 * c2 * c3) + c4;
	cout << "\n| (5 * 3 * c2 * c1) + c3 - c4   :   " << (5 * 3 * c2 * c1) + c3 - c4;
	cout << "\n| 5 * c1 * c2 / 2 * 4           :   " <<5 * c1 * c2 / 2 * 4;
	cout << "\n| 5 * (c1 * c2) / (2 * 4)       :   " << 5 * (c1 * c2) / (2 * 4);
	cout << "\n| c1++ + ++c1                   :   " << c1++ + ++c1;
	cout << "\n| ++c1 + c1++                   :   " << ++c1 + c1++;	
	cout << "\n| Now ++c1                      :   " << ++c1;
	cout << "\n+++++++++++++++++++++++++++++++++++++++++++++++\n";
	return 0;
}																		/*main() END*/
