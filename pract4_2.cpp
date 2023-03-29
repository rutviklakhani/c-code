#include<iostream>
#include<iomanip>
using namespace std;
int & tonLarge(int &a,int &b)
{
   if(a>b)
        return a;
    else
        return b;
}

main()
{
    int a,b,x;
    cout<<setw(20)<<"ID : 22DCE022"<<endl;
    cout<<"Enter First Number(A) :- ";
    cin>>a;
    cout<<"Enter Second Number(B) :- ";
    cin>>b;
    tonLarge(a,b) = 100;
    cout<<"Value of A :- "<<a<<endl;
    cout<<"Value of B :- "<<b<<endl<<endl;
    cout<<"Id : 22DCE046"<<endl;


}
