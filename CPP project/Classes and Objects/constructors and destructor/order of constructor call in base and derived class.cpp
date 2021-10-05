
#include<iostream>
using namespace std;

class base2
{
public:
    base2() {   cout<<" \n Base2 constructor \n"; }
};

class base1 : public base2
{
public:
    base1() {   cout<<"\n Base1 constructor \n"; }
};

class derived : public base1
{
public:
    derived()   {   cout<<"\n Derived constructor \n"; }
};

class base
{
public:
    base()  {   cout<<"\n base constructor \n"; }
};

class derived2 : public base, public base2
{
public:
    derived2()  {   cout<<"\n derived2 constructor \n"; }
};

int main()
{
    cout<<"\n-----------\n";
    cout<<"This is multilevel inheritance constructor call";
    cout<<"\n class base2 \n class base1 : public base2 \n class derived1 : public base1";
    cout<<"\n--------------\n";

    derived d;

    cout<<"\n-----------\n";
    cout<<"This is multiple inheritance constructor call";
    cout<<"\n class derived2 : public base, public base2";
    cout<<"\n--------------\n";

    derived2 d1;
    return 0;
}

