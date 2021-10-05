
//setprecision() manipulator function
#include<iostream>
using namespace std;

#include<iomanip>

int main()
{
    float n = 2.12346;

    cout<<"setprecision() \n\n";

    cout<<"value of n: "<<n<<endl;

    cout<<"value of n: "<<setprecision(2)<<n<<endl;

    //cout<<"value of n: "<<n<<setprecision(2)<<endl;

    //cout<<"value of n: "<<fixed<<n<<setprecision(2)<<endl;

    cout<<"value of n: "<<fixed<<setprecision(2)<<n<<endl;

    return 0;
}
