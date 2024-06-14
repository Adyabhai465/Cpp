#include <iostream>
using namespace std;
int main () {
    int n;
    cin>>n;
    if(n>0){
        if(n%5==0)
            cout<<"The Number is Divisible by 5";
        else 
            cout<<"The Number is NOT Divisilbe by 5";
    }
    else
        cout<<"The number is negative.";
}
