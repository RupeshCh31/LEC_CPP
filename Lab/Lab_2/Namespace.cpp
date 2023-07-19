#include <iostream>
namespace BEI 
{
    char subject[20] = "Electronics";
    int room = 401;

    void printSubject()
    {
        std::cout<<subject<<std::endl;
    }

    void printRoom()
    {
        std::cout<<room<<std::endl;
    }
}
namespace BCT
{
char sub[20] = "Software";
    int labroom = 402;
    void printSubject()
    {
        std::cout<<sub<<std::endl;
    }
    void printLabRoom()
    {
        std::cout<<labroom<<std::endl;
    }
}
int main()
{
    using namespace BEI;
    using namespace BCT;
    printLabRoom();
    printRoom();
    BEI::printSubject();
    BCT::printSubject();
    return 0;
}