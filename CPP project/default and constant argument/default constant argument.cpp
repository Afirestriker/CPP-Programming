
#include<iostream>
using namespace std;

void display(const int x, int y=0)
{
    int *p = new int(x);
    cout<<++*p<<endl;

    cout<<x<<endl;
    cout<<++y;
}
int main()
{
    display(8);

    return 0;
}
