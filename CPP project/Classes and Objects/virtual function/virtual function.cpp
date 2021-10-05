
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
    sample *s, base;
    derived d;
    derived1 d1;

    s = &base;
    s->display();

    s = &d;
    s->display();

    s = &d1;
    s->display();

    cout<<endl;
    return 0;
}
