#include<iostream>
using namespace std;
class batsman
{
    private :
    int bcode;
    char bname[20];
    int innings, notout, runs;
    int batavg;
    void calcavg()
    {
        batavg=runs/(innings-notout);
    }
    
    public :
    void readdata();
    void displaydata();
};
void batsman::readdata()
{
    cout<<"enter batsman code :";
    cin>>bcode;
    cout<<"enter batsman name :";
    cin>>bname;
    cout<<"enter innings :";
    cin>>innings;
    cout<<"enter notout :";
    cin>>notout;
    cout<<"enter runs :";
    cin>>runs;
    calcavg();
}

void batsman::displaydata()
{
    cout<<"batsman code"<<bcode<<"\nbatsman name"<<bname<<"\ninnings"<<innings<<"\nnotout"<<notout<<"\nruns"<<runs<<"\nbatting average"<<batavg;
}
int main()
{
    batsman obj;
    obj.readdata();
    obj.displaydata();
    
    return 0;
}