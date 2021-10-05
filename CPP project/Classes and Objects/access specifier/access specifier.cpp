
#include<iostream>
using namespace std;

class sample
{
private:
    int x;

public:
    int y;

protected:
    int z;
};

class derived : protected sample
{
public:
    void display()
    {
        z = 30;
        cout<<z<<endl;
    }

};

int main()
{
    sample s;
    derived d;

    //s.x = 10;             //error since x is private member of the class
    //cout<<s.x<<endl;      //error

    s.y = 20;
    cout<<s.y<<endl;

    //s.z = 30;             //error since z is protected member of the class
    //cout<<s.z<<endl;      //error

    d.display();

    return 0;
}
