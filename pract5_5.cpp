#include<iostream>
#include<string.h>
using namespace std;

class gate
{
    int r_no;
    char name[25];
    char E_C[20];
    static int cnt_v,cnt_s,cnt_a;

    public:
    int getdata()
    {
        cout<<"regestration number :";
        cin>>r_no;
        cout<<"student name :";
        cin>>name;
        cout<<"examination center :";
        cin>>E_C;
        cout<<endl;
        if(strcmp(E_C,"vadodara")==0)
        cnt_v++;
        else if(strcmp(E_C,"surat")==0)
        cnt_s++;
        else
        cnt_a++;
    }
    int display()
    {
        cout<<"regestration number :"<<r_no<<endl;
        cout<<"student name :"<<name<<endl;
        cout<<"examination center :"<<E_C<<endl<<endl;
    }
    static int getcount()
    {
        cout<<"students in vadodara :"<<cnt_v<<endl;
        cout<<"students in surat :"<<cnt_s<<endl;
        cout<<"students in ahemdabad :"<<cnt_a<<endl;
    }
};
int gate::cnt_v=0;
int gate::cnt_s=0;
int gate::cnt_a=0;
int main()
{
    int i;
    gate g[5];
    for(i=1;i<=5;i++)
    {
        g[i].getdata();
    }
    for(i=1;i<=5;i++)
    {
        g[i].display();
    }
    gate::getcount();
    cout<<"\nID : 22DCE046"<<endl<<endl;
    return 0;
} 