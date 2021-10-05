
//setw() manipulator operator
///setw = setting field with
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout<<"This text is without setw() \n\n";
    /*try this
    cout<<"This text is without setw() \n\n"<<setw(20); */

    cout<<setw(30)<<"This text is with setw(30) \n\n";

    cout<<"text"<<endl;

    return 0;
}
