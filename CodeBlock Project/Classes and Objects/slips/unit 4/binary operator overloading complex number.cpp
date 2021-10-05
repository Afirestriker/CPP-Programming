
/**

*/

#include<iostream>
using namespace std;

class complex
{
    public:
    int n1, n2;

        complex() {}

        complex(int x, int y) { n1 = x; n2 = y; }

        void display()
        {
            cout<<"value: "<<n1<<" + "<<n2<<"i \n\n";
        }

        complex operator +(complex obj2)
        {
            complex temp;

            temp.n1 = n1 + obj2.n1;
            temp.n2 = n2 + obj2.n2;

            return temp;
        }
};


int main()
{
    complex obj_1(2, 4), obj_2(2, 4), obj_3;

    cout<<"\nobj_1 value: \n";
    obj_1.display();

    cout<<"\nobj_2 value: \n";
    obj_2.display();

    obj_3 = obj_1 + obj_2;
    //obj_3 = obj_1.operator +(obj_2);

    cout<<"\nobj_3 value: \n";
    obj_3.display();

    return 0;
}
