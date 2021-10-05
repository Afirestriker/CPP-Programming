
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int i, n, a[n]; //Array of integers of size n
    int *p[n];      //Array of pointers which is going to store the addresses of an Array

    cout<<"Enter the range for an array: ";
    cin >> n;

    for(i=0; i<n; i++)
    {
        p[i] = &a[i];
        cout<<p[i]<<endl;
        cout<<*p[i]<<endl;
    }

    cout<<endl<<"Enter element of an array: "<<endl;
    for(i=0; i<n; i++)
        cin>>*p[i];
        //scanf("%d", p[i]);

    cout<<endl;
    cout<<"Display the element of an array: ";
    for(i=0; i<n; i++)
    {
        cout<<a[i];   //value stored at the address
        cout<<" ";
    }

    cout<<endl;

    return 0;
}
