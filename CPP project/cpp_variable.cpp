
#include <iostream>
//#include <string>
using namespace std;

int main()
{
    int num;
    double num1 = 6;
    char ch = 'B';
    char ch_arr[50] = { "character array" };
    //string str = "string character";

    // taking number value from user
    cout << "\nEnter number: ";
    cin >> num;

    //displaying number
    cout << "\n" << num << "\n\n";

    //printing number with string
    cout << "Number value: " << num << "\n\n";
    cout << "num1  : " << num1 << "\n\n";
    cout << "ch    : " << ch << "\n\n";
    cout << "ch_arr: " << ch_arr << "\n\n";
    cout << "string: " << str << "\n\n";

    return 0;
}
