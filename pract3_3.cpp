#include<iostream>
using namespace std;

int main()
{
     int n,i;
     cout<<"enter the size of array :";
     cin>>n;
     int *p=new int [n];
     for ( i = 1; i <= n; i++)
     {
        cin>>p[i];
     }
     cout<<endl;
     for ( i = 1; i <= n; i++)
     {
        cout<<p[i]+2<<endl;
     }
     delete p;
     cout<<endl<<"Id : 22DCE046"<<endl;
     
}