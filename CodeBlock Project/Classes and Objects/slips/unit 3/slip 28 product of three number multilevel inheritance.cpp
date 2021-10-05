
/**
Write a C++ program to find the product of three numbers using Multilevel Inheritance

multilevel inheritance -> one base class, one class derived from base, one class derived from derived class
*/

#include<iostream>
using namespace std;

class number1       //single base class
{
    public:
        int n1;

        void getn1()
        {
            cout<<"\nEnter number one: ";
            cin>>n1;
        }
};

class number2 : public number1      //derived from base class number1
{
    public:
        int n2;

        void getn2()
        {
            cout<<"\nEnter number two: ";
            cin>>n2;
        }
};

class number3 : public number2      //derived from class number2
{
    private:
        int n3;

    public:

        void getn3()
        {
            cout<<"\nEnter number three: ";
            cin>>n3;
        }

        int product()
        {
            return n1 * n2 * n3;
        }
};

int main()
{
    number3 num1;       //object of derive class number3

    num1.getn1();

    num1.getn2();

    num1.getn3();

    cout<<"\nProduct of three number: "<<num1.product()<<endl;

    return 0;
}
