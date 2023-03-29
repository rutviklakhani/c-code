#include<iostream>
#include<string.h>
using namespace std;
class read_child_data;
class child
{
    char name[25];
    char gender[10];
    public:
    void child_data()
    {
        cout<<"enter a name of child :";
        cin>>name;
        cout<<"enter a gender of child :";
        cin>>gender;
        cout<<endl;
    }
    friend void display(child &c1,read_child_data &r1);
};
class read_child_data
{
    char name_[25];
    char gender_[10];
    public:
    friend void display(child &c1,read_child_data &r1)
    {
        strcpy(r1.name_,c1.name);
        strcpy(r1.gender_,c1.gender);
        cout<<"name of child :"<<r1.name_<<endl;
        cout<<"gender of child:"<<r1.gender_<<endl<<endl;
    }
};
int main()
{
    child c1;
    c1.child_data();

    read_child_data r1;
    display(c1,r1);
    cout<<"ID:22DCE046"<<endl<<endl;

    return 0;
}