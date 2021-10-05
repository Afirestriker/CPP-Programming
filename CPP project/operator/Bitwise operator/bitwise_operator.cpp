
//bitwise operator
/*
    16  8  4  2  1

    code explanation at end;
*/


#include<iostream>
using namespace std;

int main()
{
    int a = 8; //1000

    int b = 12; //1100

    cout<<"Bitwise AND: "<<(a&b)<<endl; //bitwise & (AND)

    cout<<"Bitwise OR: "<<(a|b)<<endl; //bitwise | (OR)

    cout<<"Bitwise XOR: "<<(a^b)<<endl; //bitwise ^ (XOR)


    return 0;
}

/* code explanation:

    for number 8 binary number is:

        16  8  4  2  1
            1  0  0  0

    for number 12 binary number is:
        16  8  4  2  1
            1  1  0  0

    1. bitwise AND (8&12) (follow the rules of AND truth table)

        1  0  0  0   = 8
        1  1  0  0   = 12
        ----------
        1  0  0  0   = 8

    2. bitwise OR (8 | 12) (follow the rules of OR truth table)

        1  0  0  0   = 8
        1  1  0  0   = 12
        ----------
        1  1  0  0   = 12

    3. bitwise XOR (8 ^ 12) (follow the rules of Xor truth table)

        1  0  0  0   = 8
        1  1  0  0   = 12
        ----------
        0  1  0  0   = 4

*/
