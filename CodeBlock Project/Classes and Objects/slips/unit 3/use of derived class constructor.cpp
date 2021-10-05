
/**
c++ program to demonstrate the use of derived class constructors.
*/

#include<iostream>
using namespace std;

class base
{
    public:
        base()
        {
            cout<<"\nBase class constructor \n";
        }
};

class derived : public base
{
    public:
        derived()
        {
            cout<<"\nDerived class constructor \n";
        }
};

int main()
{
    derived obj;    //object for class derived

    return 0;
}
