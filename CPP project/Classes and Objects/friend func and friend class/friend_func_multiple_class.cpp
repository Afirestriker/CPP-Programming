
#include<iostream>
using namespace std;

class second;
class first
{
    int n1;
public:
    friend void maxi(first&, second&);
};

class second
{
    int n2;
    friend void maxi(first&, second&);
};

void maxi(first& obj1, second& obj2)
{
    obj1.n1 = 10;
    obj2.n2 = 20;

    if(obj1.n1 > obj2.n2)
        cout<<"\n"<<obj1.n1<<" is greater"<<endl;
    else
        cout<<"\n"<<obj2.n2<<" is greater"<<endl;
}



int main()
{
    first f;
    second s;

    maxi(f, s);
    return 0;
}
