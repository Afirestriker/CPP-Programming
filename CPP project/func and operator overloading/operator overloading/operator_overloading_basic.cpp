
/** Operator overloading (*operator which is used for different purposes is term as operator overloading)

    *Operator are the symbols which is used to performs operations on operands
    *Two types of operator -> unary and binary operator
    *operator used to perform operation only on one operand are called unary operator
    *operator used to perform operation on two operands are binary operator

    operator plus (+):
        *operator plus (+) can be used as with one operand +4 which denotes the operand is positive number
        *operator plus (+) can also be used with two operand 4+4 which result the sum equals to 8
        *basic definition of + operator is, it is used to perform addition on predefined(primitive, predefined) data type

        *but the addition cannot be perform on two objects, as the compiler doesn't know how to perform addition on two objects
         as obj is a variable of type class, which is user defined data-type.

         obj1 + obj2 //is invalid, and to make this statement valid, we use the concept called operator overloading.

    Rules for operator overloading:
        *cannot create a new operator
        *operator overloading concept works only on existing operator, the operation can be perform only on existing operator
        *the basic behavior of the operator cannot be changed
        *the operator overloading function will not works for:
            1. scope resolution operator (::)
            2. membership operator like *, .*
            3. size of operator sizeof()

    *unary operator overloading
        when there is one operand following an operator, term as unary operator overloading

    *rule for unary / binary operator overloading
            1. one operand must be an user defined data type

    *syntax for operator overloading member function
        return-type operator operator-symbol(list-of-argument);

*/

#include<iostream>
using namespace std;

class addition
{
    int n1, n2;

    public:
        addition()
        {
            cout<<"\nConstructor \n";
            n1 = 4;
            n2 = 4;
        }

        void display()
        {
            cout<<"\n\nvalue of n1 = "<<n1<<endl;
            cout<<"value of n2 = "<<n2<<endl;
        }

        void operator ++(int)
        {
            n1 = ++n1;
            n2 = ++n2;
        }

};

int main()
{
    addition obj;

    obj.display();
    //obj.operator +();
    //++obj;
    obj++;

    obj.display();

    return 0;
}
