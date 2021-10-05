
#include<iostream>
using namespace std;

class demo
{
    int n;
    static int stat;

public:
    void input()
    {
        n = ++stat;
    }

    void output()
    {
        cout<<"value of n: "<<n<<endl;
    }

    static void stat_func()
    {
        cout<<"value of stat: "<<stat<<endl;    ///only static member function can be access in static member function
        ///cout<<n; //gives error
    }
};

int demo::stat;

int main()
{
    demo d1, d2, d3;

    d1.input();
    d2.input();

    demo::stat_func();

    d3.input();

    d1.output();
    d2.output();
    d3.output();

    cout<<"\ntotal count of obj: "<<endl;
    demo::stat_func();

    return 0;
}
