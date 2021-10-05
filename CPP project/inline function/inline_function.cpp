
#include<iostream>
using namespace std;

//inline function replace the function call with function definition
inline void sum(int a, int b)
{
    cout << "sum: "<<a+b<<endl;
}

int main()
{
    cout<<"calling a function "<<endl;

    sum(10, 10); //it's replace function call with function definition

    return 0;
}
