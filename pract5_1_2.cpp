#include<iostream>
using namespace std;

class answer
{
    float h, w, ans;

public:
    void values()
    {
        cout << "Enter the height of ractangle: ";
        cin >> h;

        cout << "Enter the width of ractangle: ";
        cin >> w;
    }

    float area()
    {
        ans = h * w;
        return ans;
    }
} a1,a2,a3;

int main()
{
    float temp;
    a1.values();
    temp = a1.area();
    cout << "The area of the ractangle is: " << temp << endl<<endl;
    a2.values();
    temp = a2.area();
    cout << "The area of the ractangle is: " << temp << endl<<endl;
    a3.values();
    temp = a3.area();
    cout << "The area of the ractangle is: " << temp << endl<<endl;
    cout<<"id : 22DCE046";
    return 0;
}
