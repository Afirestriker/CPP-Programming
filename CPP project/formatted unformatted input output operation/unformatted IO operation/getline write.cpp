
#include<iostream>
using namespace std;

int main()
{
    char str[20];

    cout<<"\nEnter name: ";

    cin.getline(str, 20);

    cout<<"\nName is: "<<str<<endl;

    cout.write(str, 10);
    return 0;
}
