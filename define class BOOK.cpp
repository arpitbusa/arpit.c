#include<iostream>
using namespace std;

class BOOK
{
    private :
    int BOOKNO;
    char BOOKTITLE[20];
    float PRICE;
    void TOTAL_COST(int N)
    {
        float tcost;
        tcost=PRICE*N;
        cout<<tcost;
    }

  public:
  void INPUT()
  {
    cout<<"ENTER BOOKNO :";
    cin>>BOOKNO;
    cout<<"ENTER BOOKTITLE :";
    cin>>BOOKTITLE;
    cout<<"ENTER PRICE PER COPY :";
    cin>>PRICE;
  }
  void PURCHASE()
  {
    int n;
    cout<<"enter number to copy of purchase :";
    cin>>n;
    cout<<"total cost is ";
    TOTAL_COST(n);
}
};

int main()
{
    BOOK obj;
    obj.INPUT();
    obj.PURCHASE();
}
