#include<iostream>
using namespace std;

class Deploy
{
int a,b;
public :
Deploy(void);
void printdata()
{
    cout<<"value a is :"<<a<< endl;
    cout<<"value b is :"<<b<< endl;
}
Deploy::Deploy(void)
{
    a=10;
    b=0;
}
};

int main()
{
    Deploy data;
    data.printdata();
    return 0;
}