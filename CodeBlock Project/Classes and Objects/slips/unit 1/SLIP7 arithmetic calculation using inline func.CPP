/*7. Write a C++ program to read two float numbers. Perform arithmetic
binary operations like +, - , *, / on these numbers using Inline Function.
Display resultant value with a precision of two digits.*/

#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
inline float add(float a,float b)
{
	return a+b;
}

inline float sub(float a,float b)
{
	return a-b;
}

inline float mult(float a,float b)
{
	return a*b;
}

inline float div(float a,float b)
{
	return a/b;
}

void main()
{
	float a,b,ad,sb,multi,divi=0;
	clrscr();
	cout<<"\nEnter 1 st number : ";
	cin>>a;
	cout<<"\nEnter 2nd number : ";
	cin>>b;
	ad=add(a,b);
	sb=sub(a,b);
	multi=mult(a,b);
	if(b==0)
	{
		cout<<"\nDivision not possible";
	}
	else divi=div(a,b);
	cout.precision(6);
	cout<<"Addition = "<<ad<<endl<<"subtraction = "<<sb<<endl;
	cout<<"Multiplication="<<multi<<endl<<"Divison = "<<divi;
	getch();
}

