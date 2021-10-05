
/**
Write a C++ Program to generate payroll system of employees using Single Inheritance

single inheritance -> one base class, one derived class
*/

#include<iostream>
using namespace std;

class base_employee
{
    public:
        int emp_id;
        char emp_name[20];

        void accept()
        {
            cout<<"\nEnter employee_id: ";
            cin>>emp_id;

            cout<<"\nEnter employee_name: ";
            cin>>emp_name;
        }
};

class derived_payroll : public base_employee
{
    int bs, hra, da, gs;

    public:
        void accept2()
        {
            cout<<"\nEnter Basic salary: ";
            cin>>bs;

            hra = (bs*30)/100;
            da  = (bs*12)/100;
            gs  = bs + hra + da;
        }

        void display()
        {
            cout<<"\t"<<emp_id<<"\t"<<emp_name<<"\t"<<bs<<"\t\t"<<hra<<"\t"<<da<<"\t"<<gs<<endl;
            /*
            cout<<"\n----------------------------------------------------\n";

            cout<<"\nEmployee id: "<<emp_id<<"\t"<<"Name: "<<emp_name<<"\n\n";
            cout<<"Basic Salary: "<<bs<<endl;
            cout<<"HRA         : "<<hra<<endl;
            cout<<"DA          : "<<da<<endl;
            cout<<"Gross Salary: "<<gs<<endl;

            cout<<"\n----------------------------------------------------\n";
            */
        }

};


int main()
{
    derived_payroll obj1;

    obj1.accept();
    obj1.accept2();

    cout<<"\n-------------------------------------------------------------------\n";
    cout<<"\n\temp_id\tName\tBasic Salary\tHRA\tDA\tGS\n";
    obj1.display();
    cout<<"\n-------------------------------------------------------------------\n";

    return 0;
}
