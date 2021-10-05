
/**
Write a C++ program using this pointer to distinguish local members from parameters
*/

#include<iostream>
using namespace std;

class numbers
{
    int n1, n2;

    public:
        void getdata()
        {
            n1 = 8;
        }
        void number(int n1, int n2)
        {
            //cout<<n1;     //error (ambiquity between data member n1, and function local variable n1)
            this->n1 = n1;  // variable n1 with this pointer indicate it is data member n1
            this->n2 = n2;

            //n1 = n1;      //error
            //n2 = n2;      //error
        }

        void display()
        {
            cout<<"\nnumber1: "<<n1<<endl;
            cout<<"\nnumber2: "<<n2<<endl;
        }
};

int main()
{
    numbers n1;

    n1.getdata();

    n1.number(4, 2);

    n1.display();

    return 0;
}
