
/**
Design a base class person(name,address,phone-no).
Derive a class employee(eno,ename) from person.
Derive a class manager(designation,department,basic-salary) from employee.
Accept all details of n managers and display manager
*/

#include<iostream>
using namespace std;

class person
{
    public:
        int phone_no;
        char name[20], address[20];

        void accept_person_detail()
        {
            cout<<"\nEnter employee name: ";
            cin>>name;

            cout<<"\nEnter employee phone number: ";
            cin>>phone_no;

            cout<<"\nEnter employee address: ";
            cin>>address;
        }

        void display_person_detail()
        {
            cout<<"\nEmployee name    : "<<name;
            cout<<"\nEmployee phone_no: "<<phone_no;
            cout<<"\nEmployee address : "<<address;
        }
};

class employee : public person
{
    public:
        int emp_no;

        void accept_emp_detail()
        {
            cout<<"\nEnter employee no: ";
            cin>>emp_no;
        }

        void display_emp_detail()
        {
            cout<<"\nEmployee no: "<<emp_no;
        }
};

class manager : public employee
{
    private:
        char emp_desig[20], emp_dept[20];
        float bs;

    public:
        void accept_manager_detail()
        {
            cout<<"\nEnter employee designation: ";
            cin>>emp_desig;

            cout<<"\nEnter employee department: ";
            cin>>emp_dept;

            cout<<"\nEnter employee Basic Salary: ";
            cin>>bs;
        }

        void display_manager_detail()
        {
            cout<<"\nEmployee designation: "<<emp_desig;
            cout<<"\nEmployee department : "<<emp_dept<<endl;
        }
};



int main()
{
    int i, n;

    cout<<"\nEnter numbers of manager: ";
    cin>>n;

    manager mang[n];

    for(i=0; i<n; i++)
    {
        cout<<"\nEnter manager "<<i+1<<" details: \n";
        mang[i].accept_person_detail();
        mang[i].accept_emp_detail();
        mang[i].accept_manager_detail();

        cout<<"\n---------------------------------\n";
    }

    for(i=0; i<n; i++)
    {
        cout<<"\n---------------------------------------\n";

        cout<<"\nDisplay manager "<<i+1<< " details: \n";
        mang[i].display_person_detail();
        mang[i].display_emp_detail();
        mang[i].display_manager_detail();

        cout<<"\n---------------------------------------\n";
    }

    return 0;
}
