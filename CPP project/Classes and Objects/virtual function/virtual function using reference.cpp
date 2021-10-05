
#include<iostream>
using namespace std;

class sample
{
public:
    virtual  void display()
    {
        cout<<"\ncontent of the sample class";
    }
};

class derived : public sample
{
public:
    void display()
    {
        cout<<"\ncontent of the derived class";
    }
};

class derived1 : public derived
{
public:
    void display()
    {
        cout<<"\ncontent of the derived1 class";
    }
};

int main()
{

    derived d;
    derived1 d1;

    sample base;
    sample&s = base;
    s.display();

    sample &ss = d;
    ss.display();

    sample &sss = d1;
    sss.display();

    cout<<endl;
    return 0;
}
