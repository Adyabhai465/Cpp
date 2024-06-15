#include <iostream>
using namespace std;
int main() {
    float x1,x2,x3,x4,x5;
    cout<<"Enter the marks of the first subject : ";
    cin>>x1;
    cout<<"Enter the marks of the second subeject : ";
    cin>>x2;
    cout<<"Enter the number of the third subject : ";
    cin>>x3;
    cout<<"Enter the number of the fourth subject : ";
    cin>>x4;
    cout<<"Enter the number of the fifth subject : ";
    cin>>x5;
    float percent = (x1+x2+x3+x4+x5)/5;
    cout<<"Percentage is "<<percent;
}
