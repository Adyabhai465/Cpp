#include <iostream>
using namespace std;
int main() {
    int x,y;
    cout<<"Enter the X co-ordinate : ";
    cin>>x;
    cout<<"Enter the Y co-ordinate : ";
    cin>>y;
    if(x>0 && y>0)
        cout<<"1st Quadrant";
    if(x<0 && y>0)
        cout<<"2nd Quadrant";
    if(x<0 && y<0)
        cout<<"3rd Quadrant";
    if(x>0 && y<0)
        cout<<"4th Quadrant";
}
