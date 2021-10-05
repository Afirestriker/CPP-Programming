
/**
c++ program, to increment and decrement a complex number

unary operator overloading -> using one operand to call operator overloading function
*/

#include<iostream>
using namespace std;

class complex
{

    int a, b, c;

    public:
        void getvalue()
        {
            cout<<"Enter the two numbers: ";
            cin>>a>>b;
        }

        void operator ++(int)  ///operator overloading member function
        {
            a = ++a;
            b = ++b;
        }

        void operator --()  ///operator overloading member function
        {
            a = --a;
            b = --b;
        }

        void display()
        {
            cout<<"\t"<<a<<"+ \t"<<b<<"i"<<endl;
        }
};


int main()
{
    complex obj;

    obj.getvalue();

    obj.display();

    obj++;
    //++obj;
    //obj.operator ++();

    cout<<"\nIncrement complex number: \n";
    obj.display();

    --obj;
    //obj.operator --();

    cout<<"\nDecrement complex number: \n";
    obj.display();

    return 0;
}
