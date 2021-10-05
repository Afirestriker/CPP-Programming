
/**
Write a C++ program to find the area and perimeter of rectangle using multiple inheritance.
*/

#include<iostream>
using namespace std;

class area
{
    public:

        int area_of_rect(int l, int b)
        {
           return l*b;
        }
};

class perimeter
{
    public:

        int perimeter_of_rect(int l, int b)
        {
            return 2*l*b;
        }
};

class rectangle : public area, public perimeter
{
    int length, breadth;

    public:
        void accept()
        {
            cout<<"\nEnter rectangle length: "; cin>>length;

            cout<<"\nEnter rectangle breadth: "; cin>>breadth;
        }

        int area()
        {
            return area_of_rect(length, breadth);
            //return area::area_of_rect(length, breadth);
            //cout<<"\nArea of rectangle: "<<area_of_rect(length, breadth)<<"\n";
        }

        int perimeter()
        {
            return perimeter_of_rect(length, breadth);
            //return perimeter::perimeter_of_rect(length, breadth);
            //cout<<"Perimeter of rectangle: "<<perimeter_of_rect(length, breadth)<<"\n";
        }
};


int main()
{
    rectangle r1;

    r1.accept();

    cout<<"\n---------------------------------\n";
    cout<<"\nArea of rectangle: "<<r1.area();
    cout<<"\nPerimeter of rectangle: "<<r1.perimeter()<<endl;
    cout<<"\n---------------------------------\n";

    return 0;
}

