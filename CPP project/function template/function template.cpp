
#include<iostream>
using namespace std;

///function template    OR  Generic function
template<class t, class c>  ///class val -> is term as placeholder, we can have any number of placeholder separated by comma
t maxi(t x, c y)
{
    if(x > y)
        return x;
    else
        return y;
}


int main()
{
    cout<<maxi(4,6)<<endl;

    cout<<maxi(4.6, 6.8)<<endl;

    cout<<maxi(4, 6.8)<<endl;

    return 0;
}
