
/**
Write a C++ program to create a class Student which contains data members as Roll Number,
Stud_Name, Marks of 5 subjects (in an array), Percentage.
Write member functions to accept Student details, calculate percentage &
display student mark sheet.  (Use array of objects)
*/


#include<iostream>
using namespace std;


class student
{
    int roll_no;
    char std_name[20];
    float mark[5], total, percen;

    public:

        student()
        {
            total = 0;
        }

        void accept()
        {
            cout<<"\nEnter student roll no. : "; cin>>roll_no;

            cout<<"Enter student name     : "; cin>>std_name;

            cout<<endl;
            for(int i=0; i<5; i++)
            {
                cout<<"Enter subj "<<i+1<<" mark: ";
                cin>>mark[i];
            }
        }

        void calculate()
        {
            for(int i=0; i<5; i++)
            {
                total += mark[i];
            }

            percen = total/5;
        }

        void display()
        {
            cout<<"-----------------------------------------";
            cout<<"\nStudent roll no. :"<<roll_no<<"\t Name: "<<std_name<<endl;

            for(int i=0; i<5; i++)
            {
                cout<<"\nSubject "<<i+1<<" mark : "<<mark[i];
            }

            cout.precision(4);
            cout<<"\n\nMarks total    : "<<total<<"\tPercentage : "<<percen<<"%"<<endl;

            cout<<"-----------------------------------------\n";
        }
};


int main()
{
    int i, total_std;

    cout<<"\nEnter the numbers of student: ";
    cin>>total_std;

    student stud[total_std];

    for(i=0; i<total_std; i++)
    {
        cout<<"-----------------------------------------\n";
        cout<<"Enter data for student "<<i+1<<endl;
        stud[i].accept();
    }

    for(i=0; i<total_std; i++)
    {
        cout<<"\n-----------------------------------------\n";
        cout<<"Displaying data for student "<<i+1<<endl;
        stud[i].calculate();
        stud[i].display();
    }

    return 0;
}
