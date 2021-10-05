
/**
Write a C++ program to find the sum and average of n elements
*/

#include<iostream>
using namespace std;

class average
{
    int n, num[8], sum, avg;

    public:

        void accept()
        {

            cout<<"\nTotal numbers to enter: ";
            cin>>n;

            cout<<"\nEnter numbers: \n";
            for(int i=0; i<n; i++)
            {
                cin>>num[i];
            }
        }

        void calculate()
        {
            sum = 0;

            for(int i=0; i<n; i++)
            {
                sum = sum + num[i];
            }

            avg = sum/n ;
        }

        void display()
        {
            cout<<"\n--------------------\n";
            cout<<"Sum: "<<sum<<endl;
            cout<<"Avg: "<<avg<<endl;
        }
};

int main()
{
    average avg1;

    avg1.accept();
    avg1.calculate();
    avg1.display();

    return 0;
}
