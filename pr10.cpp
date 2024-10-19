#include <iostream>
using namespace std;

int main()
{
    int width;
    int height;
    cout<<"Enter the width of the Rectangle: "<<endl;
    cin>>width;
    cout<<"Enter the height of the Rectangle: "<<endl;
    cin>>height;
    int peri;
    peri = 2*(height+width);
    cout<<"Perimeter of the Rectangle is: "<<peri<<endl;
    return 0;
}
