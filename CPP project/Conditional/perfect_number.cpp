
#include <iostream>
using namespace std;

void perfect_number(int);

int main()
{
    int num;

    cout << "\nEnter number: ";
    cin >> num;

    perfect_number(num);

    return 0;
}

void perfect_number(int n)
{
    int temp, s=0;

    cout << "\n";

    temp = n/2;

    while(temp > 0)
    {
        if(n%temp == 0)
        {
            s = s+temp;
        }
        temp--;
    }

    if(s == n)
    {
        cout << "\nSum = number: " << s << " = " << n << "\n";
        cout << "\n\t" << n << " is perfect number \n";
    }
    else
    {
        cout << "\nSum != number: " << s << " != " << n << "\n";
        cout << "\n\t" << n << " is not perfect number \n";
    }
}
