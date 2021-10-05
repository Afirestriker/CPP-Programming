
#include <iostream>
using namespace std;

void accept_array(int *, int);
void display_array(int *, int);

int main()
{
    int arr[50], num, i;

    cout << "\nEnter number of element to enter: ";
    cin >> num;

    accept_array(arr, num);
    display_array(arr, num);

    cout << "\n";

    return 0;
}

void accept_array(int ar[], int n)
{
    int i;

    cout << "\nEnter array element: ";
    for(i=0; i<n; i++)
        cin >> ar[i];
}

void display_array(int ar[], int n)
{
    int i;
    cout << "\n\nDisplaying array element: ";
    for(i=0; i<n; i++)
        cout << ar[i] << " ";
}
