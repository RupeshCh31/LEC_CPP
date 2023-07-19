#include<iostream>
using namespace std;

class Test
{
    public:
    Test()
    {
        cout<<"Control is in constructor"<<endl;
        cout<<"Initialization operation is done here"<<endl;
    }

    ~Test()
    {
        cout<<"Control is in Destructor"<<endl;
        cout<<"Cleanup operation performed here"<<endl;
    }
};

int main()
{
    Test t;
    cout<<"\nFunction main() terminating....";
}