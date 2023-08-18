#include<iostream>
using namespace std;
class student
{
    double marks;
    int marks()
    {
        int m;
        marks = m;
        cout<<"Enter the marks :";
        cin>>m;
    }

    void calculateAvg(student s1 ,student s2)
    {
        double avg;
        avg = (s1.marks + s2.marks)/2;

    }
};

int main()
{
    student s1,s2;
    return 0;
}