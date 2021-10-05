
/**
c++ program, for unary minus operator overloading
*/

#include<iostream>
using namespace std;

class num
{
    int n;

    public:
        //function to get number
        void getnum()
        {
            cout<<"\nEnter number: ";
            cin>>n;
        }

        //function to display number
        void display()
        {
            cout<<"\nValue of number: "<<n<<"\n\n";
        }

        //unary - operator overloading function
        void operator -()
        {
            n = -n;
        }

};


int main()
{
    num obj;

    obj.getnum();

    obj.display();

    -obj;                   ///when there is one operand with an operator it is example of unary operator overloading
    //obj.operator -();

    cout<<"\nUnary operator minus overloading: ";
    obj.display();

    return 0;
}
