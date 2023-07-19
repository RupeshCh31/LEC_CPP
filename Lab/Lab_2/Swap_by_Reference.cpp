#include <iostream>
using namespace std;
void swap(int &x ,int &y)
{
    
    int temp =x;
    x=y;
    y=temp; 
}
int getnum()
{
    int s;
    cout<<"Enter the number :"<<endl;
    cin>>s;
    return s;
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