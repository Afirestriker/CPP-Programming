
/**
Write a C++ Program to demonstrate the use of nesting of member functions.
*/

#include<iostream>
using namespace std;

class sum
{
    int n1, n2;
    void accept()
    {
        cout<<"\nEnter first number: ";
        cin>>n1;

        cout<<"\nEnter second number: ";
        cin>>n2;
    }

    public:
        void display();
};

void sum::display()
{
    accept();   ///private member function

    cout<<"\nAddition of "<<n1<<" and "<<n2<<" : "<<n1+n2<<endl;
}


int main()
{
    sum s1;

    s1.display();

    return 0;
}
