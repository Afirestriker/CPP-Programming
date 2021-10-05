
#include <iostream>
#include <stdlib.h>

using namespace std;

void menu(int *);
void number(int *, int *);

int main()
{
    int ch, num1, num2;

    while(1)
    {
        menu(&ch);

        if(ch != 5)
            number(&num1, &num2);

        switch(ch)
        {
            case 1: cout << "\nAddition: " << num1 + num2 << "\n\n";
                    break;

            case 2: cout << "\nSubscraction: " << num1 - num2 << "\n\n";
                    break;

            case 3: cout << "\nMultiplication: " << num1 * num2 << "\n\n";
                    break;

            case 4: cout << "\nDivision: " << num1 / num2 << "\n\n";
                    break;

            case 5: exit(0);
                    break;
        }

    }

    return 0;
}

void menu(int *i)
{
    cout << "\n\nSelect the choice \n";
    cout << "1. Addition \n";
    cout << "2. Substraction \n";
    cout << "3. Multiplication \n";
    cout << "4. Division \n";
    cout << "5. Exit \n\n";

    cout << "Enter the number: ";
    cin >> *i;
}

void number(int *n1, int *n2)
{
    cout << "\nEnter the number: ";
    cin >> *n1;

    cout << "\nEnter another number: ";
    cin >> *n2;
}
