
#include<iostream>
using namespace std;

int num = 8;

int main()
{
    int num = 6;

    cout<<"\nNum: "<<num<<endl;

    cout<<"\nNum: "<<::num<<" (using scope resolution operator (::) )"<<endl;

    return 0;
}
