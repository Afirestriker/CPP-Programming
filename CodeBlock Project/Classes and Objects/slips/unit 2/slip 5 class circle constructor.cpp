
/**
Write a C++ Program to find the area of a circle using default and parameterised constructor .
*/

#include<iostream>
using namespace std;

class circle
{
    float r;

    public:
        circle()
        {
            r = 0;
        }

        circle(float radius)
        {
            r = radius;
        }

        float area()
        {
            return 3.14*r*r;
        }
};

int main()
{
    circle c1;
    circle c2(4.2);

    cout<<"\nCircle c1 Area: "<< c1.area() <<endl;


    cout<<"\nCircle c2 Area: "<< c2.area() <<endl;

    return 0;
}

