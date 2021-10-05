
/**
Write a C++ program to calculate maximum of two integer numbers of two different classes using friend function.
*/

#include<iostream>
using namespace std;

class B;
class A
{
    int n1;

    friend void maxi(A, B);

    public:
        void accept()
        {
            cout<<"\nEnter first number: ";
            cin>>n1;
        }
};


class B
{
    int n2;

    friend void maxi(A, B);

    public:
        void accept()
        {
            cout<<"\nEnter second number: ";
            cin>>n2;
        }
};

void maxi(A a, B b)
{
    if(a.n1 > b.n2)
        cout<<"\n\t"<<a.n1<<" is greater number \n";
    else if(a.n1 < b.n2)
        cout<<"\n\t"<<b.n2<<" is greater number \n";
    else
        cout<<"\n\tBoth number is equal \n";
}

int main()
{
    A obj1;
    B obj2;

    obj1.accept();

    obj2.accept();

    maxi(obj1, obj2);

    return 0;
}
