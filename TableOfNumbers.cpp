#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter the number : ";
    cin>>a;
    b=10*a;
    for(int i=a ; i<=b ; i++){
        if(i%a==0) {
            cout<<i<<endl;
        }
    }
}