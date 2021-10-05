
#include<iostream>
using namespace std;

int main()
{
    int i = 10, y = 3;
    char c = 'a';

    int sum = c + i;

    cout<<"sum:  "<<sum<<endl;
    cout<<"sum: "<<(char)sum<<endl; //explicit type casting

    cout<<endl;

    cout<<"sum: "<<i/y<<endl;
    cout<<"sum: "<<(float)i/y;  //explicit type casting

    cout<<endl;
    return 0;
}
