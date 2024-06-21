#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int last_digit = 0;
    int r = 0;
    while(n>0) {
        r*=10;
        last_digit = n%10;
        r+= last_digit;
        n/=10;
    }
    cout<<r;
}