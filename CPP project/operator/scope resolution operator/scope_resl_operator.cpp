
//scope resolution operator

/*access the global variable inside function(local variable)

defined member function outside the class

use to initialize the static data member outside the class

use in case of the multiple inheritance
*/

#include<iostream>
using namespace std;

int num = 20;

int main()
{
    int num = 100;

    cout<<" "<<num; //local variable

    cout<<" "<<::num <<endl; //access global variable num using scope resolution operator

    {
        num = 10;
        //int num = 10;

        cout<<" "<<num;
        cout<<" "<<::num <<endl;
    }

    cout<<" "<<num <<endl;

    return 0;
}
