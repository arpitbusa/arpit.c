#include<iostream>
using namespace std;

class Test
{
    public:
    Test()
    {
        cout<<"\n constructor excuted";
    }
    ~Test()
    {
        cout<<"\n destructor excuted";
    }
};
int main()
{
    Test t;
    return 0;
}