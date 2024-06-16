#include <iostream>
using namespace std;
int main() {
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;
    int v = (int) ch;
    if ((v>=97 && v<=122) || (v>=65 && v<=90)) {
        cout<<"Character is an alphabet.";
    }
    else 
        cout<<"Character is not an alphabet.";
}
