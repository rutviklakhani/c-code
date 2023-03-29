#include<iostream>
#include<string.h>
using namespace std;

class student
{
    public:
    int id;
    char name[10];
    char div;
    int cl;

    void takedata()
    {
         cout<<"enter the id :";
         cin>>id;
         cout<<"enter the name :";
         cin>>name;
         cout<<"enter the div :";
         cin>>div;
         cout<<"enter the cl:";
         cin>>cl;
         cout<<endl;
    }

    void display()
    {
        cout<<"id :"<<id<<endl;
        cout<<"name :"<<name<<endl;
        cout<<"div :"<<div<<endl;
        cout<<"class :"<<cl<<endl;
    }
};
int main()
{
    student s[5];

    for(int i=1;i<=5;i++){
        s[i].takedata();
    }

    for(int i=1;i<=5;i++){
        s[i].display();
    }
    cout<<"id no : 22DCE046";
}
