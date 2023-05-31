#include <iostream>
using namespace std;
int swap(int & ,int &);
int getnum();
int main(void)
{
    int num1 = getnum();
    int num2 = getnum();
    cout<<"Values before swap :"<<"num1"<<"num2";
    swap(num1 , num2);
    cout<<"Values after swap :"<<"num1"<<"num2";
    return 0;
}