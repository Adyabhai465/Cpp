#include <iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cin>>a;
    cin>>b;
    cin>>op;
    if(op=='+') cout<<a+b;
    if(op=='-') cout<<a-b;
    if(op=='*') cout<<a*b;
    if(op=='/') cout<<a/b;
}
