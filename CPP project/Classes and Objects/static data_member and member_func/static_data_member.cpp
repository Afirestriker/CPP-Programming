
#include<iostream>
using namespace std;

class demo
{
    int n;
    static int countt;  //common for all objects of the class

public:
    //demo() {countt++;}
    void input()
    {
        n = ++countt;
    }

    void output()
    {
        cout<<"n: "<<n<<endl;
        cout<<"countt: "<<countt<<endl;
    }
};

int demo::countt;   ///static data member countt defined and default initialization for it is '0'

int main()
{
    demo s1, s2;

    s1.input();
    s1.output();

    s2.input();
    s2.output();

    return 0;
}
