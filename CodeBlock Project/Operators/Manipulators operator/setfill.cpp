
//setfill() manipulator operator
///setfill() is always used with setw() manipulator function
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout<<setfill('#')<<setw(6)<<"text"<<endl<<endl;

    cout<<setw(6)<<setfill('#')<<"text"<<endl<<endl;

    cout<<setw(8)<<"text\n";

    return 0;
}
