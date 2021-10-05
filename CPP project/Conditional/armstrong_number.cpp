
#include <iostream>
using namespace std;

void armstrong_number(int);

int main()
{
    int num;

    cout << "\nEnter number to find armstrong number from 1 to the number entered: \n";
    cout << "\nEnter number: ";
    cin >> num;

    armstrong_number(num);

    return 0;
}

void armstrong_number(int n)
{
    int temp, i, d, s=0;

        for(i=1; i<=n; i++)
        {
            temp = i;
            s = 0;

            while(temp > 0)
            {
                d = temp % 10;

                if(i<100)
                    s = s + d*d;
                else if(i>99 && i<1000)
                    s = s + d*d*d;
                else if(i>999 && i<10000)
                    s = s + d*d*d*d;

                temp = temp / 10;
            }

            if(s == i)
                cout << i << "\t";
        }

    cout << "\n";
}
