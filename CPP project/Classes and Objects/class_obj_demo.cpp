
#include<iostream>
using namespace std;

class sum
{
    int a, b, c;        ///Data member

    public:               ///access specifier

        sum() {}
        sum(int x, int y) { a = x; b = y;}

        void input()    ///member function       (data member + member function) = class members
        {
            cout<<"\nEnter two number's to add: ";
            cin>>a>>b;
        }

        void logic()
        {
            c = a + b;
        }

        void output();
};

void sum::output()
        {
            cout<<"\nAdding two number's: "<<c<<endl;
        }

int main()
{

    sum s1(2, 4), s2;


    //s1.input();
    s1.logic();
    s1.output();

    s2.input();
    s2.logic();
    s2.output();

    return 0;
}
