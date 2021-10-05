
#include<iostream>
using namespace std;

class sample
{
    int n;

    public:
        sample()    { n = 10; }

        friend void operator ++(sample &objs, int);
};

void operator ++(sample &objs, int)
{
    objs.n++;
    cout<<"\nValue of objs.n: "<<objs.n<<endl;
}

int main()
{
    sample s1;

    s1++;


    return 0;
}
