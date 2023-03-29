#include<iostream>
using namespace std;
class date
{
    int d,m,y;
    public:
    int getdata()
    {
        cin>>d>>m>>y;
    }
    int display()
    {
        cout<<d<<"/"<<m<<"/"<<y<<endl;
    }
    friend void swapdate(date d1,date d2);
};
void swapdate(date d1,date d2)
{
    date temp;
    swap(d1,d2);
    cout<<"after swaping date 1 :";
    d1.display();
    cout<<"after swaping date 2 :";
    d2.display();
}
int main()
{
    date d1,d2;
    d1.getdata();
    d2.getdata();

    d1.display();
    d2.display();
    swapdate(d1,d2); 
    cout<<"\nID : 22DCE046"<<endl<<endl;
    return 0;
} 