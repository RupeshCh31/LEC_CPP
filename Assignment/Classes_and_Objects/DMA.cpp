#include<iostream>
using namespace std;
int *age = new int;
char *name = new char[20];

void scanAgeandName()
{
    cout<<"Enter your Name: "<<endl;
    cin>>name;
    cout<<"Enter your Age: "<<endl;
    cin>>*age;
}

void freeMemory()
{
    delete age;
    delete [] name;
}

void printAgeandName()
{
    cout<<endl<<"Name : "<<name;
    cout<<endl<<"Age : "<<*age;
}

int main()
{
    scanAgeandName();
    cout<<endl<<"Memory allocated dynamically for name and age";
    cout<<endl<<"Value of Name and Age before deallocator";
    printAgeandName();
    freeMemory();
    cout<<"\nAfter Deallocation : ";
    printAgeandName();
    return 0;
}