#include<iostream>
using namespace std;

class Vehicle
{
    private:
    int platenumber;

    public:
    int getnumber(int a)
    {
        //cout<<"Enter the number of your vehicle:";
        //cin>>platenumber;
        platenumber = a;
        return platenumber;
    }
};

int main()
{
    int b = 1829;
    Vehicle Audii;
    Audii.getnumber(b);
    cout<<"The platenumber of your vehicle is:"<<Audii.getnumber(b);
    return 0;
}