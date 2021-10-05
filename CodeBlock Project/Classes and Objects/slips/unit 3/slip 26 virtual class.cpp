
/**
Create a base class student(rollno,name) which derives two classes test(mark1,mark2),sport(score).
class result(total_marks,grade)inherits both test and sport classes.
Write a C++ program to calculate total_marks,percentage.
*/

#include<iostream>
using namespace std;

class student  ///rollno, name
{
    public:
        int roll_no;
        char name[20];

        void accept_student_detail()
        {
            cout<<"\nEnter roll no. : ";
            cin>>roll_no;

            cout<<"\nEnter name     : ";
            cin>>name;
        }

        void display_student_detail()
        {
            cout<<"Student roll_no: "<<roll_no<<"\t"<<"Name: "<<name<<endl;
        }
};

class test : virtual public student    ///if virtual is not used -> result an error i.e data member or member function of class student is ambiguous
{
    public:
        float mark1, mark2;

        void accept_test_detail()
        {
            cout<<"\nEnter mark1: "; cin>>mark1;

            cout<<"\nEnter mark2: "; cin>>mark2;
        }

        void display_test_detail()
        {
            cout<<"\nMark1:  "<<mark1<<endl;
            cout<<"\nMark2:  "<<mark2<<endl;
        }
};

class sport : public virtual student   ///score
{
    public:
        float score;

        void accept_sport_detail()
        {
            cout<<"\nEnter sport score: "; cin>>score;
        }

        void display_sport_detail()
        {
            cout<<"\nScore:  "<<score<<endl;
        }
};

class result : public test, public sport   ///total_marks, grade
{
    private:
        float total_marks, percen;

    public:

        void calculate_result()
        {
            total_marks = mark1 + mark2 + score;

            percen = total_marks / 3;
        }

        void display_result()
        {
            cout<<"\nTotal_marks:  "<<total_marks<<endl;
            cout<<"\nPercentage :  "<<percen<<"%"<<endl;
        }
};


int main()
{
    result r1;

    r1.accept_student_detail();
    r1.accept_test_detail();
    r1.accept_sport_detail();

    cout<<"\n------------------------------------------------------\n";

    r1.display_student_detail();
    r1.display_test_detail();
    r1.display_sport_detail();
    r1.calculate_result();
    r1.display_result();

    cout<<"\n------------------------------------------------------\n";

    return 0;
}
