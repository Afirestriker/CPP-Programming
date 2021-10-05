
/**
Write a C++ Program to illustrate the use of multiple inheritance
multiple inheritance -> two base class and one derived class
*/

#include<iostream>
using namespace std;

class base1
{
    public:

        base1()     //constructor
        {
            cout<<"\nBase1 class constructor\n";
        }
        int b1;

        void number_one()
        {
            cout<<"\nEnter first number: ";
            cin>>b1;
        }
};

class base2
{
    public:
        base2()
        {
            cout<<"\nBase2 class constructor\n";
        }
        int b2;

        void number_two()
        {
            cout<<"\nEnter second number: ";
            cin>>b2;
        }
};

class derived : public base1, public base2      //also define the order of constructor call
{
    public:
        derived()
        {
            cout<<"\nderived class constructor\n";
        }
        void output()
        {
            cout<<"\nAddition: "<<b1+b2<<endl;
            //cout<<"\nAddition: "<<base1::b1+b2<<endl;
        }
};

int main()
{
    derived d1;         ///derived class object

    d1.number_one();    ///number_one is member function of class base1

    d1.number_two();    ///number_two is member function of class base2

    d1.output();        ///output is member function of class derived

    return 0;
}
