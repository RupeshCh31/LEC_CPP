#include<iostream>
#include<cmath>
using namespace std;

class Number
{
private:
    double num;

public:
    class NEG{};

    void readNum()
    {
        cout<<"Enter the number :";
        cin>>num;
    }

    double sqroot()
    {
        if(num<0)
        {
            throw NEG();
        }
        else {
            return sqrt(num);
        }

    }

};

int main()
{
    Number n;
    double temp;
    n.readNum();
    temp = n.sqroot();
    try
    {
        cout<<"Finding square root";
        cout<<"Square root is :"<<temp<<endl;

    }
        catch(Number::NEG)
        {
            cout<<"Square root of -ve number is imaginary";
        }
    
return 0;
}