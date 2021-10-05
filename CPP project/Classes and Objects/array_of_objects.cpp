
#include<iostream>
using namespace std;

class demo
{
    char name[20];
    int id;

public:
    void getdata()
    {
        cout<<"\nEnter name: ";
        cin>>name;

        cout<<"Enter id: ";
        cin>>id;
    }

    void putdata()
    {
        cout<<"\n\t"<<name<<"\t"<<id<<endl;
    }
};

int main()
{
    demo d[20];

    int n;

    cout<<"\nEnter total number of employee: ";
    cin>>n;

    cout<<"\nEnter employee details: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"\nEnter employee "<<i+1<<" details: ";
        d[i].getdata();
    }

    cout<<"\nDisplay employee details: ";
    for(int i=0; i<n; i++)
    {
        cout<<"\nDisplay employee "<<i+1<<" details: ";
        d[i].putdata();
    }

    cout<<endl;
    return 0;

}
