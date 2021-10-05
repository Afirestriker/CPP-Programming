
/**
Write the definition for a class called ‘point’ that has x & y as integer data members.
Use copy constructor to copy one object to another.
(Use Default and parameterized constructor to initialize the appropriate objects)
*/

#include<iostream>
using namespace std;

class point
{
    int x, y;

    public:

        point() {x = 0; y = 0;}

        point(int n1, int n2) {x = n1; y = n2;}

        point(const point& obj) {x = obj.x; y = obj.y;}

        void display()
        {
            cout<<"\n\t X: "<<x<<"\t Y: "<<y<<endl;
        }
};

int main()
{
    point p1, p2(4, 8);

    cout<<"\nobj p1: ";
    p1.display();

    cout<<"\nobj p2: ";
    p2.display();

    point p3(p1);
    cout<<"\nobj p3(p1): ";
    p3.display();

    p3 = p2;
    cout<<"\nobj p3 = p2: ";
    p3.display();

    p3 = p1;
    cout<<"\nobj p3 = p1: ";
    p3.display();

/*
    p3(p2);
    cout<<"\nobj p3(p2): ";
    p3.display();
*/

    return 0;
}
