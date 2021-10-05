
#include <iostream>
#include <stdlib.h>
using namespace std;

void accept_array(int *, int);
void display_array(int *, int);

int main()
{
    int *arr, n;

    cout << "\nEnter number of element to enter: ";
    cin >> n;

    arr = (int *)malloc(n * sizeof(int));

    if(arr == NULL)
    {
        cout << "\nMemory not allocated \n";
        exit(0);
    }

    accept_array(arr, n);
    display_array(arr, n);

    free(arr);
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

    cout << "\nDisplaying array element: ";
    for(i=0; i<n; i++)
        cout << ar[i] << " ";
}
