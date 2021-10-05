
#include <iostream>     // include predefined class/function
using namespace std;    // standard namespace libraby

int main()
{
    int num, n;

    // display the string enclose in double quotes
    cout << "\nEnter numbers: ";    // << = insertion operator
    cin  >> num >> n; // take number from user in run time  >>  = extraction operator

    // display the string in double quotes and number stored in num variable
    cout << "\nNumber num: " << num << endl;    // endl = end line
    cout << "Number n: " << n << endl;

    return 0;
}
