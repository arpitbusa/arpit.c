#include<iostream>
using namespace std;

class Demo
{
private:
  int num_1,num_2;

  public:
  Demo(int n1,int n2)
  {
    cout<<"inside constructor"<<endl;
    num_1=n1;
    num_2=n2;
  }
  void Display()
  {
    cout<<"num_1 ="<<num_1<<endl;
    cout<<"num_2 ="<<num_2<<endl;
  }
  ~Demo()
  {
    cout<<"inside destructor";
  }
};

int main()
{
    Demo obj1(10,20);
    obj1.Display();
    return 0;
}