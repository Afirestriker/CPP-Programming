
#include<iostream>
using namespace std;

class demo
{
private:
    int n;

public:
    friend void func(demo&);
};

void func(demo& ob1)
{
    //accessing class private data_member using friend function
    cout<<"\nEnter number of ob1.n: ";
    cin>>ob1.n;

    cout<<"ob1.n: "<<ob1.n<<endl;
}

int main()
{
    demo d1;

    func(d1);   //friend function call

    return 0;
}
