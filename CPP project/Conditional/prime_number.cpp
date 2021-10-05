
#include <iostream>

using namespace std;

void prime_number(int *);

int main()
{
    int num;

    cout << "\nEnter number to find prime numbers from 1 to the number entered: \n";
    cout << "\nEnter number: ";
    cin >> num;

    prime_number(&num);

    return 0;
}

void prime_number(int *n)
{
    int temp, i;

    cout << "\n";

    for(i=1; i<=*n; i++)
    {
        temp = i/2;

        while(temp > 1)
        {
            if(i%temp == 0)
                break;

            temp--;
        }

        if(temp == 1)
            cout << i << "\t";
    }

    cout << "\n";
}
