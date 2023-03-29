#include<iostream>
using namespace std;
class tiles;
class land
{
    int length,width,area1;
    public:
    int data_of_land();
    int calculate_area1();
    friend void number_of_tiles(land &l1,tiles &t1);
};
class tiles
{
    int l,w,area2;
    public:
    int data_of_tiles()
    {
        cout<<"enter a length of tiles :";
        cin>>l;
        cout<<"enter a width of tiles :";
        cin>>w;
    }
    int calculate_area2()
    {
        area2=l*w;
        cout<<"the area of land is :"<<area2<<endl<<endl;
    }
    friend void number_of_tiles(land &l1,tiles &t1)
    {
        int num;
        num=l1.area1/t1.area2;
        cout<<"the number of tiles is :"<<num<<endl<<endl;
    }
    
};

int land::data_of_land()
{
    cout<<"enter a length of land :";
    cin>>length;
    cout<<"enter a width of land :";
    cin>>width;
}
int land::calculate_area1()
{
    area1=length*width;
    cout<<"the area of land is :"<<area1<<endl<<endl;
}
int main()
{
    land l1;
    l1.data_of_land();
    l1.calculate_area1();

    tiles t1;
    t1.data_of_tiles();
    t1.calculate_area2();
    number_of_tiles(l1,t1);
    cout<<"ID : 22DCE046"<<endl<<endl;

    return 0;
} 