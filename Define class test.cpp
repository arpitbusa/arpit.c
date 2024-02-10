#include<iostream>
using namespace std;
class TEST
{
    private :
  int TESTCODE;
  char Description[30];
  int NoCandidate;
  int CenterReqd;
  int CALCNTR()
  {
return NoCandidate/100+1;
}

public :
  void SCHEDULE();
  void DISPTEST();
};
void TEST::SCHEDULE()
{
    cout<<"enter TESTCODE :";
    cin>> TESTCODE;
    cout<<"enter Description :";
    cin>> Description;
    cout<<"enter no of candidate :";
    cin>> NoCandidate;
    CenterReqd=CALCNTR();
}

void TEST::DISPTEST()
{
    cout<<"TESTCODE"<<TESTCODE<<"\nDescription"<<Description<<"\nno of candidate"<<NoCandidate<<"\ncenter required"<<CenterReqd;
}

int main()
{
  TEST obj;
   obj. SCHEDULE();
   obj. DISPTEST();
}