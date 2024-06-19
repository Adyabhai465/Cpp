#include <iostream>
using namespace std;
int main(){
    int a,b,n;
    cout<<"Enter the starting number : ";
    cin>>a;
    cout<<"Enter the multiplicative : ";
    cin>>b;
    cout<<"Enter the number upto which GP is required : ";
    cin>>n;
    for(int i=a ; i<=n ; i=i*b){
        cout<<i<<endl;
    }
}