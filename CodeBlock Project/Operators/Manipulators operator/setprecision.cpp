
//setprecision() manipulator function
#include<iostream>
using namespace std;

#include<iomanip>

int main()
{
    float n = 2.12346;

    cout<<"setprecision() \n\n";

    cout<<"value of n w/o setpricision: "<<n<<endl<<endl;
    cout<<"value of n: "<<setprecision(4)<<n<<endl;
    cout<<"value of n: "<<fixed<<setprecision(4)<<n<<endl;
    //cout<<"value of n: "<<fixed<<setprecision(4)<<n<<endl;

    //cout<<"value of n: "<<n<<setprecision(2)<<endl;
    //cout<<"value of n: "<<fixed<<n<<setprecision(2)<<endl;

    cout<<"\nPrecision set for multiple line: \n";
    cout.precision(4);
    cout<<"value of n: "<<n<<endl;
    cout<<"value of n: "<<n<<endl;

    return 0;
}
