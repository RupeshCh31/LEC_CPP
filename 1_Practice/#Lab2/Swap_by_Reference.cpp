#include <iostream>
using namespace std;
int swap(int &x ,int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    return 0;
}
int getnum()
{
    int r,s;
    cout<<"Enter the number :"<<endl;
    cin>>r>>s;
    return 0;
}
int main()
{
    int num1 = getnum();
    int num2 = getnum();
    cout<<"Values before swap :"<<num1<<","<<num2;
    swap(num1 , num2);
    cout<<"Values after swap :"<<num1<<","<<num2;
    return 0;
}