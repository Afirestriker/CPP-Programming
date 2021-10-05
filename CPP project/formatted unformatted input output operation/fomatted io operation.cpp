
#include<iostream>
using namespace std;

int main()
{
    cout.width(5);
    cout<<"6"<<endl;

    cout.precision(2);
    cout<<2.1234<<endl;

    cout.fill('*');
    cout.width(6);
    cout<<"8"<<endl;

    cout.setf(ios::showpos);
    cout<<100<<100<<endl;

    return 0;
}
