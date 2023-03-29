#include<iostream>
using namespace std;

int devide(int &a,int &b)
{
    int n=a/b;
    if(n%2==0)
    {
        cout<<"number is divisible"<<endl;
    }
    else{
        cout<<"number is indivisible"<<endl;
    }

}
int devide(int n)
{
   int i,flag=0;
    if(n==0||n==1)
    {
        flag=1;
    }
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
        }
        else{
            flag=0;
        }
    }
    if(flag==1)
    {
        cout<<"nonprime"<<endl;
    }
    else{
        cout<<"prime"<<endl;
    }
}
float devide(float p,float q,float r)
{
    cout<<"avrage of numbers is :"<<(p+q+r)/3;

}

int main()
{
    int a,b;
    cout<<"enter a numerator :";
    cin>>a;
    cout<<"enter a dinominator :";
    cin>>b;
    devide(a,b);

    int n;
    cout<<"enter a number :";
    cin>>n;
    devide(n);

    int p,q,r;
    cout<<"enter a value of p :";
    cin>>p;
    cout<<"enter a value of q :";
    cin>>q;
    cout<<"enter a value of r :";
    cin>>r;
    devide(p,q,r);
    cout<<endl;

    cout<<"Id : 22DCE046"<<endl;

    return 0;
}
