
#include <iostream>
#include <stdlib.h>
using namespace std;

void enter_array(int *, int);
void display_array(int *, int);

void menu(int *);
void linear_search(int *, int);
void binary_s(int *, int);
void lower_array(int *, int, int, int);
void upper_array(int *, int, int, int);


int main()
{
    int *arr, n, choice;

    cout << "\nEnter number of element to enter: ";
    cin >> n;

    arr = (int *)malloc(n * sizeof(int));
    if(arr == NULL)
    {
        cout << "\nMemory not allocated \n";
        exit(0);
    }

    enter_array(arr, n);
    display_array(arr, n);

    menu(&choice);

    switch(choice)
    {
        case 1: linear_search(arr, n);
                break;

        case 2: binary_s(arr, n);
                break;

        case 3: cout << "\nTerminating program.... \n";
                exit(0);
                break;
    }

    return 0;
}


void enter_array(int ar[], int n)
{
    int i;

    cout << "\nEnter array element: ";
    for(i=0; i<n; i++)
        cin >> ar[i];

    cout << "\n";
}

void display_array(int ar[], int n)
{
    int i;

    cout << "\nDisplay array element: ";
    for(i=0; i<n; i++)
        cout << ar[i] << " ";

    cout << "\n";
}

void menu(int *ch)
{
    cout << "\n\nSelect the element search method:";
    cout << "\n1. Linear search";
    cout << "\n2. Binary search";
    cout << "\n3. Exit";

    cout << "\n\nEnter the choice: ";
    cin >> *ch;
}

void search_element(int *s)
{
    cout << "\nEnter the element to search: ";
    cin >> *s;
}

void linear_search(int ar[], int n)
{
    int s, i;

    cout << "\n\nLinear search: \n\n";
    search_element(&s);

    for(i=0; i<n; i++)
    {
        if(ar[i] == s)
        {
            cout << "\n\tElement" << " " << ar[i] << " found" << " at location" << " " << i+1 << "\n";
            break;
        }
    }

    if(i == n)
        cout << "\n\tElement " << s << " not found \n\n";
}


void binary_s(int ar[], int n)
{
    int i, j, k, s, h, ll, ul;

    cout << "\n\nBinary search: \n\n";
    //search_element(&s);

    ///insertion sort:
    for(i=1; i<n; i++)
    {
        k = ar[i];

        for(j=i-1; j>=0 && ar[j] > k; j--)
            ar[j+1] = ar[j];

        ar[j+1] = k;
    }
    ///insertion loop close
    cout << "\nDisplaying sorted array:";
    display_array(ar, n);

    search_element(&s);

    i=0;
    h = n/2;
    if(ar[h] == s)
        cout << "\n\tArray element " << ar[h] << " found at location " << h+1 << "\n";
    else if(ar[h] > s)
    {
        ul = h;
        //ll = 0;
        lower_array(ar, i, ul, s);
    }
    else if(ar[h] < s)
    {
        ll = h;
        //ul = n;
        upper_array(ar, ll, n, s);
    }

}///binary function close


void lower_array(int ar[], int i, int n, int s)
{
    int h, ll, ul;

    cout << "\n\nLower array: \n\n";
    h = n/2;

    cout << "i: " << i << endl << "n: " << n << endl << "\nh: " << h << endl;
    cout << "ar[h]: " << ar[h] << "\n";

    if(ar[h] == s)
    {
        cout << "\nll: " << i << "\nul: " << n << endl;
        cout << "\n\tElement " << ar[h] << " found at location " << h+1 << "\n";
    }
    else if(ar[h] > s)
    {
        ul = h;
        lower_array(ar, i, ul, s);
    }
    else if(ar[h] < s)
    {
        ll = h;
        upper_array(ar, ll, n, s);
    }
}

void upper_array(int ar[], int i, int n, int s)
{
    int h, nn, ll, ul;

    cout << "\n\nUpper Array: \n\n";

    nn = n+i;   //nn = new array limit
    h = nn/2;
    cout << "i: " << i << endl << "n: " << n << "\n\n";
    cout << "nn = (n+i): " << nn << "\n\n";
    cout << "h = nn/2: " << h << endl << "ar[h]: " << ar[h] << "\n\n";

    if(ar[h] == s)
    {
        cout << "\nll: " << i << "\nul: " << n << endl;
        cout << "\n\tElement " << ar[h] << " found at location " << h+1 << "\n";
    }
    else if(ar[h] > s)
    {
        ul = h;
        lower_array(ar, i, ul, s);
    }
    else if(ar[h] < s)
    {
        ll = h;
        upper_array(ar, ll, n, s);
    }
}
