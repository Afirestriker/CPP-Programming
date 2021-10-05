
#include<iostream>
using namespace std;

class base2
{
public:
    base2() {   cout<<" \n Base2 constructor \n"; }

    ~base2() { cout<<" \n Base2 destructor \n"; }
};

class base
{
public:
    base()  {   cout<<"\n base constructor \n"; }

    ~base() {   cout<<"\n base destructor \n"; }
};

class derived2 : public base, public base2
{
public:
    derived2()  {   cout<<"\n derived2 constructor \n"; }

    ~derived2() {   cout<<"\n derived2 destructor \n"; }
};

int main()
{
    cout<<"\n-----------\n";
    cout<<"This is multiple inheritance constructor call";
    cout<<"\n class derived2 : public base, public base2";
    cout<<"\n--------------\n";

    derived2 d1;

    cout<<"\nOrder of destructor call is opposite to the order of constructor call\n";

    return 0;
}

