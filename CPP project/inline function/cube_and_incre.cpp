
//inline func prog, to find cube and increment of given number

#include<iostream>
using namespace std;

inline int cube(int);

inline int incre(int n)
{
    return n++;
}

int main()
{
    int num;

    cout<<"\nEnter number: ";
    cin>>num;

    cout<<"\nCube of "<<num<<" : "<<cube(num);

    cout<<"\n\nIncrement of "<<num<<" : "<<incre(num)<<endl;

    return 0;
}

int cube(int x)
{
    return x*x*x;
}
