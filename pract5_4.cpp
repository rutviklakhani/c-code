#include<iostream>
using namespace std;
class Dist
{
public:
 int feet;
 float inches,scale_factor;
 void getdata();
 void putdata();
 int scale(Dist &d);
};
void Dist::getdata()
{
 cout<<"Enter distance(feet) : ";
 cin>>feet;
 cout<<"Enter distance(inches): ";
 cin>>inches;
 cout<<"Enter the scale factor: ";
 cin>>scale_factor;
}
void Dist::putdata()
{
 cout<<"Distance: "<<feet<<"'-"<<inches<<"\""<<endl;
}
int Dist::scale(Dist &d)
{
 d.feet = (d.feet*scale_factor);
 d.inches = (d.inches*scale_factor);
}
int main()
{
 Dist d1;
 d1.getdata();
 d1.scale(d1);
 d1.putdata();
 cout<<"ID:22DCE046"<<endl;
}
