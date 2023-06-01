#include<iostream>
using namespace std;

class A
{
    public:
    int data;
    void getdata()
    {
        cout<<"Enter value of data :"<<endl;
        cin>>data;
    }

    void showdata()
    {
        cout<<"Data is :"<<data;
    }
};

class B
{
    public:
    A A1;
    int b;
    void getdata()
    {
        A1.getdata();
        cout<<"Enter value of b :"<<endl;
        cin>>b;
    }
    void showdata()
    {
        A1.showdata();
        cout<<"\nValue of B :"<<b;
    }
};

int main()
{
    B B1;
    B1.getdata();
    B1.showdata();
    return 0;
}