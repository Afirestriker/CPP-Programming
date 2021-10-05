
#include <iostream>
using namespace std;

void factors(int);

int main()
{
    int num;

    cout << "\nEnter number to find factors of number:";
    cout << "\nEnter number: ";
    cin >> num;

    factors(num);

    return 0;
}

void factors(int n)
{
    int f=1;

    cout << "\n\tFactors of " << n << ": ";

    while(n > 0)
    {
        f = f * n;
        n--;
    }

    cout << f << "\n";
}
