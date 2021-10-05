
// max of two number using inline function

#include<iostream>
using namespace std;

inline int max_of_two(int x, int y)
{
    return (x>y)?x:y;
}

int main()
{
    cout<<"\nMax of two number: "<<endl;

    cout<<"max_of_two(20, 10): "<<max_of_two(20, 10)<<endl;

    return 0;
}
