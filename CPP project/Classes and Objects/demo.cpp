
/**

*/

#include<iostream>
using namespace std;

class demo
{
    int x[8], n, i;

    public:
        void accept()
        {
            cout<<"\nEnter value for n: "; cin>>n;
            cout<<"\nEnter value for x: \n";
            for(i=0; i<n; i++)
                cin>>x[i];
        }

        void display()
        {
            cout<<"\nDisplay value for x: \n";
            for(i=0; i<n; i++)
                cout<<"\n"<<x[i]<<endl;
        }
};


int main()
{

    demo d1;

    d1.accept();

    d1.display();


    return 0;
}
