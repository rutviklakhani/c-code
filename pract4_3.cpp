#include<iostream>
#include<math.h>
using namespace std;

inline double power(int p,double b=2)
{
    double ans;
    ans=pow(b,p);
    return ans;
}

int main()
{
   double b,ans1,ans2;
   int p;

   cout<<"enter the base :";
   cin>>b;
   cout<<"enter the power";
   cin>>p;
   ans1=power(p,b);
   ans2=power(p);
   cout<<"your answer is:"<<ans1<<endl;
   cout<<"your default answer is:"<<ans2<<endl<<endl;
   cout<<"Id : 22DCE046"<<endl<<endl;
}
