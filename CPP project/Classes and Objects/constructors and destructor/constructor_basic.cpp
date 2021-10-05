
/*

    constructor is used to initialized the instances (data member) of the class
    constructor has same name as of class name
    constructor does not return any value, and has no return type
    constructor is invoked automatically whenever an object is created for that class
    constructor can be call explicitly
    If we do not specify a constructor,
     C++ compiler generates a default constructor for us (expects no parameters and has an empty body).

    If we specify parameterized constructor directly, then compiler will not create default constructor implicitly,
    As it assume that programmer will create the object with constructors.

    destructor:
        The destructor are intended to free the memory space. And all the resources that were allocated for the object.
        The return value is not supported since only memory has to be made free
        syntax ->   ~constructor_name();    // tilde symbol (~), destructor doesn't have argument
        only one destructor is allowed, even if the class has multiple constructor, only one would is used
        Sequence of destructor call:
                    Revere of the order of constructor call

        constructor can be overloaded as it can have different signature,
        destructor can not be overloaded as it doesn't have different signature.

*/

#include<iostream>
using namespace std;

class demo
{
    int n;

public:

    demo()  //default constructor
    {
        cout<<"\nDefault constructor\n";
        n = 0;
    }

    demo(int n1)    //parameterized constructor, here if the "int n1" is initialized by default in function signature then,
                    //compiler will give an error when d1; object gets created
    {
        cout<<"\nParameterized constructor\n";
        n = n1;
    }

    void putdata()
    {
        cout<<"\n value of n: "<<n<<endl;
    }

};


int main()
{
    demo d1;        //call default constructor
    demo d2(8);     //call parameterized constructor

    d1.putdata();
    d2.putdata();

    return 0;
}
