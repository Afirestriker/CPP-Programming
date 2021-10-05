
#include<iostream>
using namespace std;

class sample
{
public:
    void putvalue()
    {
        cout<<"\n base \n";
    }

    virtual void display()
    {
        cout<< "\n base \n";
    };
};

class derived : public sample
{
public:
    void putvalue()
    {
        cout<<"\n derived \n";
    }

    void display()
    {
        cout<<"\n derived \n";
    }
};

int main()
{
    sample *s;
    derived d;

    s = &d;

    s->putvalue();
    s->display();

    return 0;
}
