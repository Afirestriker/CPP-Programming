
#include<iostream>
using namespace std;

class sample
{
    int n;
public:
    sample()
    {
        cout<<"\nDefault constructor ";
    }

    sample(int x)
    {
        cout<<"\nParameterized constructor ";
        n = x;
    }

    sample(const sample &obj)
    {
        n = obj.n;
    }

    ~sample()
    {
        cout<<"\nDestructor is called";
    }

    void display()
    {
        cout<<"\nvalue of n: "<<n<<endl;
    }

};

int main()
{
    sample s1, s2(4), s3=s2;

    s1.display();

    s2.display();

    s3.display();

    return 0;
}
