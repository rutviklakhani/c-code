#include<iostream>
using namespace std;

class cur
{
    int rupee,paisa;
    public:
    void enter();
    void show();
    void sum(cur c1,cur c2);
    cur sum(cur s3);
}c1,c2,c3;
void cur::enter()
{
    cout<<"enter the rupee :";
    cin>>rupee;

    cout<<"enter the paisa :";
    cin>>paisa;
}
void cur::show()
{
    if(paisa>=100)
    cout<<rupee+(paisa/100)<<"."<<(paisa%100)<<endl<<endl;
    else
    cout<<rupee<<"."<<paisa<<endl<<endl;
}
void cur::sum(cur c1,cur c2)
{
    rupee=c1.rupee+c2.rupee;
    paisa=c1.paisa+c2.paisa;
}
cur cur::sum(cur s3)
{
    cur c3; 
    c3.rupee=rupee+s3.rupee;
    c3.paisa=paisa+s3.paisa;
    return c3;
}
int main()
{
    c1.enter();
    c1.show();

    c2.enter();
    c2.show();

    c3.sum(c1,c2);
    cout<<"total currency is :";
    c3.show();

    c3=c1.sum(c2);
    cout<<"total currency is :";
    c3.show();
}  