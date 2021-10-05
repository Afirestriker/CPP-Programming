
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream of;

    of.open("filename.txt");

    of<<"\nfile";
    of<<"\nfilename";
    of.close();

    return 0;
}
