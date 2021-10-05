
/**

*/

#include<iostream>
using namespace std;

class complex
{
    public:

    int n1, n2;

    complex()   {}

    complex(int x, int y)   { n1 = x; n2 = y; }

    void display()
    {
        cout<<"\t"<<n1<<" + "<<n2<<"i \n\n";
    }

    friend complex operator +(complex&, complex&);
};

complex operator +(complex& obj1, complex& obj2)
{
    complex temp;

    temp.n1 = obj1.n1 + obj2.n1;
    temp.n2 = obj1.n2 + obj2.n2;

    return temp;
}


int main()
{
    complex obj_1(4, 2), obj_2(2, 4), obj_3;

    cout<<endl;

    obj_1.display();

    obj_2.display();

    obj_3 = obj_1 + obj_2;
    //obj_3 = operator +(obj_1, obj_2);
    obj_3.display();

    return 0;
}
