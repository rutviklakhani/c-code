#include<iostream>
using namespace std;

struct college_details
{
    char collage_name[10];
    char collage_code[10];
    char department[10];
    int in_take;

    public:
    int input()
    {
        cout<<"name of the collage: ";
        cin>>collage_name;
        cout<<"collage code: ";
        cin>>collage_code;
        cout<<"department: ";
        cin>>department;
        cout<<"department in-take: ";
        cin>>in_take;
        cout<<endl<<endl;
    }
    int display()
    {
        cout<<"name of the collage:"<<collage_name<<endl;
        cout<<"collage code:"<<collage_code<<endl;
        cout<<"department:"<<department<<endl;
        cout<<"department in-take:"<<in_take<<endl<<endl;
    }

}s;
int main()
{
    cout<<"+++++ Enter the collage information +++++"<<endl<<endl;
    s.input();
    cout<<"********* Collage Information *********"<<endl<<endl;
    s.display();
    cout<<"\t   Id :22DCE046"<<endl;

}
