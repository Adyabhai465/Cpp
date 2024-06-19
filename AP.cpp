#include <iostream>
using namespace std;
int main(){
    int a,b,n;
    cout<<"Enter the starting number : ";
    cin>>a;
    cout<<"Enter the difference : ";
    cin>>b;
    cout<<"Enter the number upto which AP is required : ";
    cin>>n;
    for(int i=a ; i<=n ; i=i+b){
        cout<<i<<endl;
    }
}