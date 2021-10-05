
#include<iostream>
using namespace std;

class demo
{
    demo()
    {
        cout<<"\nDefault constructor\n";
    }

public:
    demo(int x=8)
    {
        cout<<"parameterized constructor\n";
        //cout<<"\nparameterized constructor with value "<<x<<endl;
    }
};

int main()
{
    demo d1(4);

    return 0;
}
