
/*
    "this" pointer store the address of the current object of the class
    "this" pointer is the implicit argument to non-static member function
    "this" pointer is also use to distinguish data_member and function local_variable if they are of same name
        as in this program
*/

#include<iostream>
using namespace std;

class demo
{
    int a, b;

public:
    void input(int a, int b)
    {
        this->a = a+b;
        this->b = a*b;
    }

    void output()
    {
        cout<<"\nvalue of n1: "<<this->a;
        cout<<"\nvalue of n2: "<<b;
    }
};

int main()
{
    demo d1;

    d1.input(2, 4);
    d1.output();
    cout<<endl;

    return 0;
}
