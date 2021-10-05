
/**

*/

#include<iostream>
using namespace std;

int num(int n1, int n2)
{
    return n1+n2;
}

int num(int n1, int n2, int n3)
{
    return n1+n2+n3;
}

int main()
{
    cout<<"\nvalue of num: "<<num(4, 4);

    cout<<"\n\nvalue of num: "<<num(4, 4, 4);

    cout<<"\n\n";

    return 0;
}
