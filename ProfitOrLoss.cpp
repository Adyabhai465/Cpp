#include <iostream>
using namespace std;
int main() {
    int cp, sp;
    cout<<"Enter the Cost Price : ";
    cin>>cp;
    cout<<"Enter the Seeling Price : ";
    cin>>sp;
    if(cp<sp)
        cout<<"Profit is "<<sp-cp;
    if (cp==sp)
        cout<<"No Profit No Loss";
    if (cp>sp)
        cout<<"Loss is"<<cp-sp;
}
