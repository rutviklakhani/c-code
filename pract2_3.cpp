#include<iostream>
using namespace std;

class swap
{

    int a,b;
    public:
    void input()
    {
       cout<<"enter the value of a :";
       cin>>a;
       cout<<"enter the value of b :";
       cin>>b;
    }
    int swap_()
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    void display()
    {
       // cout<<"id no :22DCE046";
        cout<<"after swaping the value of a is :"<<a<<endl;
        cout<<"after swaping the value of b is :"<<b<<endl<<endl;

    }
}s1;
int main()
{
    s1.input();
    s1.swap_();
    s1.display();
    cout<<"ID: 22DCE046";
}
