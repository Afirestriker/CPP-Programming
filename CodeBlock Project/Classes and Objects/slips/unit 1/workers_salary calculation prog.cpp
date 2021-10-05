
/*Q. write a C++ program to create a class worker with data members as
     worker_name, no_of_hours_worked, pay_rate. Write necessary member
     functions to calculate and display the salary of worker. (use default
     value for pay_rate) */

#include<iostream.h>
#include<conio.h>

class worker
{
	char worker_name[30];
	int no_of_hrs_worked;

    public:
	void accept()
	{
	    cout<<"\nEnter name: ";
	    cin>>worker_name;

	    cout<<"\nNo_of_hrs_worked: ";
	    cin>>no_of_hrs_worked;
	}

	void calculation( int pay_rate = 50)
	{
	    cout<<"\nTotal salary of worker is Rs.";
	    cout<<(no_of_hrs_worked*30)*pay_rate<<endl;
	}
};

void main()
{
    worker w1;
    clrscr();


    w1.accept();
    w1.calculation();

    getch();
}