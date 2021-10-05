
/**
C++ program to show the order of constructor calls in Multiple Inheritance
*/

#include<iostream>
using namespace std;

class base1
{
    public:
        base1()
        {
            cout<<"\nBase1 constructor \n";
        }
};

class base2
{
    public:
        base2()
        {
            cout<<"\nBase2 constructor \n";
        }
};

class derived1 : public base1, public base2
{
    public:
        derived1()
        {
            cout<<"\nDerived1 constructor \n";
        }
};

class derived2 : public base2, public base1
{
    public:
        derived2()
        {
            cout<<"\nDerived2 constructor \n";
        }
};

int main()
{
    cout<<"\nclass derived1 : public base1, public base2 \n";
    derived1 obj1;

    cout<<"\n-----------------------\n";

    cout<<"\nclass derived2 : public base2, public base1 \n";
    derived2 obj2;

    return 0;
}
