/*8.Write a C++ program to find area and volume of cylinder
using Inline function.*/
#include<conio.h>
#include<iostream.h>
class cylinder
{
	float r,h;
	public:
	void getdata()
	{
		cout<<"\n Enter radius : ";
		cin>>r;
		cout<<"\n Enter height : ";
		cin>>h;
	}
	void area();
	void volume();
};
inline void cylinder::area()
{
	cout<<"\n Area of cylinder =\t"<<2*3.14*r*h;
}
inline void cylinder::volume()
{
	cout<<"\nVolume of cylinder =\t"<<3.14*r*r*h;
}

void main()
{
	clrscr();
	cylinder c;
	c.getdata();
	c.volume();
	c.area();
	getch();
}