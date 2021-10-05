
#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

int main()
{
    char ch;
    ifstream fin;
    ofstream folow, foupp;

    fin.open("filename.txt");

    folow.open("lower.txt");
    foupp.open("upper.txt");

    if(!fin || !folow || !foupp)
    {
        cout<<"\nError has occur while opening file";
        exit(0);
    }

    while(fin.get(ch))
    {
        if(ch >= 'a' && ch<='z')
            folow.put(ch);
        else
            foupp.put(ch);
    }

    fin.close();
    folow.close();
    foupp.close();

    return 0;
}
