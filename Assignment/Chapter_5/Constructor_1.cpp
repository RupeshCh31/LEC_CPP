#include <iostream>
using namespace std;

class position
{
    private:
    int rank;
    public:
    position()
    {
        cout<<"Enter the rank of Player1:"<<endl;
        cin>>rank;
    }

    position(int r)
    {
        rank = r;
    }

    void showdata()
    {
        cout<<"\nRank of the Player1:"<<rank;
    }

};
int main()
{
    position p1,p2(3);
    p1.showdata();
    p2.showdata();
    return 0;

}