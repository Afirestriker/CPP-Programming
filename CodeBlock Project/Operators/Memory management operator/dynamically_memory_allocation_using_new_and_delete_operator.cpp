
//memory management
#include<iostream>
using namespace std;

int main()
{
    int n,*ar, *num;

    //dynamically allocated memory for normal variable
    num = new int(6);
    cout<<"value of num: "<<*num<<endl<<endl;


    cout<<"Enter the number of data to stored: ";
    cin>>n;

    //dynamically allocate memory for pointer
    ar = new int[n]; //ar = new int;

    cout<<"\nEnter numbers: \n";
    for(int i=0; i<n; i++)
    {
        cout<<"number "<<i+1<<" : ";
        cin>>ar[i]; //or *(ar+i);
    }

    cout<<"\noutput of array: \n";
    for(int i=0; i<n; i++)
    {
        cout<<"number "<<i+1<<" : "<<ar[i]<<endl;
    }

    //de-allocate memory
    delete num;
    delete [] ar;

    return 0;
}
