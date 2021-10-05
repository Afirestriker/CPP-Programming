
/**
Write a C++ program to create a class Employee which contains data members as
Emp_Id, Emp_Name, Basic_Salary, HRA, DA, Gross_Salary.
Write member functions to accept Employee information. Calculate and display Gross salary of an employee.
(DA=12% of Basic salary and HRA = 30% of Basic salary)
(Use appropriate manipulators to display employee information in given format :-
Emp_Id and Emp_Name should be left justified and
Basic_Salary, HRA, DA, Gross salary Right justified with a precision of two digits)

*/


#include<iostream>
#include<iomanip>
using namespace std;

class employee
{
    int emp_id;
    float bs, hra, da, gs, i;
    char emp_name[20];
    static int countt;

    public:
    void accept()
    {
        i = ++countt;
        cout<<"\nEnter employee "<<i<<" detail: \n\n";
        cout<<"Enter employee id: ";
        cin>>emp_id;

        cout<<"Enter employee name: ";
        cin>>emp_name;

        cout<<"\nEnter Basic Salary: "; cin>>bs;
      }

    void calculate()
    {
        //hra = (bs*30)/100;
        hra = 0.3*bs;
        //da = (bs*12)/100;
        da = 0.12*bs;

        gs = bs + hra + da;
    }

    void display();

    static void total_emp()
    {
        cout<<"\n\nTotal employee: "<<countt<<"\n\n";
    }
};

int employee::countt;

void employee::display()
{
    cout<<"\n------------------------------\n";
    cout<<"\nEmp_id: "<<emp_id<<"\t"<<"Emp_name: "<<emp_name<<"\n\n";

    cout.precision(2);
    cout<<fixed;
    cout<<setw(20)<<"Basic Salary: "<<bs<<endl;
    cout<<setw(20)<<"HRA         : "<<hra<<endl;
    cout<<setw(20)<<"DA          : "<<da<<endl;
    cout<<setw(20)<<"Gross Salary: "<<gs<<endl;


    cout<<"\n------------------------------\n";
}

int main()
{
    employee emp1;

    emp1.accept();

    emp1.calculate();

    emp1.display();

    employee::total_emp();

    return 0;
}
