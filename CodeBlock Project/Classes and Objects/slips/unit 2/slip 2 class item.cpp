
/** Write a C++ program to create a class Item with data members Item_Code, Item_Name, Item_Price.
   Write member functions to accept and display Item information also display number of objects
   created for a class. (Use Static data member and Static member function) */

#include<iostream>
using namespace std;

class item
{
    int item_code, item_price, item_no;
    char item_name[20];
    static int countt;

    public:

    void accept()
    {
        item_no = ++countt;
        cout<<"-------------------------------------"<<endl;
        cout<<"Enter item info no. "<<item_no;

        cout<<"\nEnter item_code: "; cin>>item_code;

        cout<<"Enter item_name: "; cin>>item_name;

        cout<<"Enter item_price: "; cin>>item_price;
        cout<<endl;
    }

    void display()
    {
        cout<<"\n-------------------------------------"<<endl;
        cout<<"Displaying item info no. "<<item_no;

        cout<<"\nItem_code: "<<item_code;

        cout<<"\nItem_name: "<<item_name;

        cout<<"\nItem_price: "<<item_price<<endl;
    }

    static void countt_incre()
    {
        cout<<"-------------------------------------"<<endl;
        cout<<"\nTotal object in class item: "<<countt<<endl;
    }

};

int item::countt;

int main()
{
    item i1, i2;

    i1.accept();
    i2.accept();

    i1.display();
    i2.display();

    item::countt_incre();

    return 0;
}
