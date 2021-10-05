
/**
Write a C++ program to find the area of a rectangles using static data members.
*/

#include<iostream>
using namespace std;

class rectangle
{
    int length, width, area;
    static int countt;

    public:
        void getdata()
        {
            cout<<"\nEnter length of rectangle: ";
            cin>>length;

            cout<<"Enter width  of rectangle: ";
            cin>>width;
        }

        void display()
        {
            cout<<"\n--------------------------------------\n";

            countt++;
            area = length * width;
            cout<<"\nArea of rectangle "<<countt<<": "<<area<<endl;

            cout<<"\n--------------------------------------\n";
        }
};

int rectangle::countt;

int main()
{
    rectangle r1, r2;

    r1.getdata();
    r2.getdata();

    r1.display();
    r2.display();

    return 0;
}
