
#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "\nEnter number: ";
    cin >> num;

    if(num % 2 == 0)
        cout << "\n" << num << " is even number \n\n";
    else
        cout << "\n" << num << " is odd number \n\n";

    return 0;
}
