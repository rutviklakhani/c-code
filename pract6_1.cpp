#include<iostream>
using namespace std;
class time
{
    int hr,mi,sec;
    public:
    void getdata()
    {
        cout<<"enter an hour :";
        cin>>hr;
        cout<<"enter a minute :";
        cin>>mi;
        cout<<"enter a second :";
        cin>>sec;
    }
    void putdata()
    {
        cout<<hr<<":"<<mi<<":"<<sec<<endl;
    }
    time()
    {
        hr=0;
        mi=0;
        sec=0;
    }
    time(int x,int y,int z)
    {
        hr=x;
        mi=y;
        sec=z;
    }
    time(time &t2)
    {
        hr=t2.hr;
        mi=t2.mi;
        sec=t2.sec;
    }
    ~time()
    {
        cout<<"destructor is called"<<endl<<endl;
    }

};
int main()
{
    cout<<"\ndefault constructor is called"<<endl;
    time t1;
    t1.getdata();
    t1.putdata();
    cout<<"\nparameterized constructor is called"<<endl;
    time t2;
    t2.getdata();
    t2.putdata();
    cout<<"\ncopy constructor is called"<<endl;
    time t3(t1);
    t3.putdata();
    cout<<"\nID : 22DCE046"<<endl<<endl;
    
     return 0;
} 