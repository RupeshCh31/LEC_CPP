#include <iostream>
using namespace std;

float absolute(double var)
{
    if(var < 0.0)
    var = - var;
    return var;
}

int absolute(int var)
{
    if(var<0)
    var = - var;
    return var;
}

int main()
{
    cout<<"The absolute value of -5 ="<< absolute(-5)<<endl;
    cout<<"The absolute value of 5.5 ="<< absolute(5.5)<<endl;

    return 0;
}
