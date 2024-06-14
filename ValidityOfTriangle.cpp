#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"Enter the first side : ";
    cin>>a;
    cout<<"Enter teh second side : ";
    cin>>b;
    cout<<"Enter the third side : ";
    cin>>c;
    if((a+b)>c && (b+c)>a && (a+c)>b)
        cout<<"Triangle is valid.";
    else
        cout<<"Triangle is invalid.";
    
}
