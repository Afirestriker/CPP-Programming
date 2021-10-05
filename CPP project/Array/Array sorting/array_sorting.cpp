
#include <iostream>
#include <stdlib.h>
using namespace std;

void menu(int *);
void enter_array(int *, int *);
void display_array(int *, int *);
void bubble_sort(int *, int *);
void selection_sort(int *, int *);
void insertion_sort(int *, int *);

int arr[50], n, i, j, k;

int main()
{
    int choice;

    menu(&choice);

    switch(choice)
    {
        case 1: enter_array(arr, &n);
                break;

        case 2: display_array(arr, &n);
                break;

        case 3: bubble_sort(arr, &n);
                break;

        case 4: selection_sort(arr, &n);
                break;

        case 5: insertion_sort(arr, &n);
                break;

        case 6: exit(0);
                break;
    }


    return 0;
}

void menu(int *ch)
{
    cout << "\n1. Enter new array";
    cout << "\n2. Display array";
    cout << "\n3. Bubble sort";
    cout << "\n4. Selection sort";
    cout << "\n5. Insertion sort";
    cout << "\n6. Exit";

    cout << "\n\nEnter the choice: ";
    cin >> *ch;
}

void enter_array(int ar[], int *n)
{
    cout << "\nEnter the number of element to stored: ";
    cin >> *n;

    cout << "\nEnter array element: ";
    for(i=0; i<*n; i++)
        cin >> ar[i];

    cout << "\n";
    main();
}


void display_array(int ar[], int *n)
{
    cout << "\nDisplay array element: ";
    for(i=0; i<*n; i++)
        cout << ar[i] << " ";

    cout << "\n";
    main();
}

void bubble_sort(int ar[], int *n)
{
    cout << "\nBubble sort: \n";

    for(k=0; k<*n; k++)
    {
        for(i=0; i<*n-1; i++)
        {
            for(j=i+1; j<*n; j++)
            {
                if(ar[i] > ar[j])
                {
                    ar[i] = ar[i] + ar[j];
                    ar[j] = ar[i] - ar[j];
                    ar[i] = ar[i] - ar[j];
                }
            }
        }
    }
    display_array(ar, n);
}

void selection_sort(int ar[], int *n)
{
    cout << "\nSelection sort \n";

    for(i=0; i<*n-1; i++)
    {
        for(j=i+1; j<*n; j++)
        {
            if(ar[i] > ar[j])
            {
                ar[i] = ar[i] + ar[j];
                ar[j] = ar[i] - ar[j];
                ar[i] = ar[i] - ar[j];
            }
        }
    }
    display_array(ar, n);
}

void insertion_sort(int ar[], int *n)
{
    cout << "\nInsertion sort: \n";

    for(i=1; i<*n; i++)
    {
        k = ar[i];

        for(j=i-1; j>=0 && ar[j] > k; j--)
            ar[j+1] = ar[j];

        ar[j+1] = k;
    }

    display_array(ar, n);
}
