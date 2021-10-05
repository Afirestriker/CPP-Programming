
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "\nEnter number: ";
    cin >> num1;

    cout << "\nEnter another number: ";
    cin >> num2;

    cout << "\nEnter another number: ";
    cin >> num3;

    if(num1 > num2 && num1 > num3)
        cout << "\n" << num1 << " is greater number \n\n";
    else if(num2 > num3)
        cout << "\n" << num2 << " is greater number \n\n";
    else
        cout << "\n" << num3 << " is greater number \n\n";


    return 0;
}
