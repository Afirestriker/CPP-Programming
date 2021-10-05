
#include<iostream>
using namespace std;

class sample
{
public:
    virtual void display() = 0;
};

class derived : public sample
{
public:
    int n;

    void display()
    {
        n = 10;
        cout<<"\nvalue of n: "<<n<<endl;
    }

};

int main()
{
    derived d1;

    d1.display();

    return 0;
}
