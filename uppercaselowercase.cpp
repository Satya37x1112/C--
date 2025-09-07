#include <iostream>
using namespace std;
int main(){
    char n;
    cout << "Enter character\n";
    cin >> n;
    if(n>='A' && n<='Z'){
        cout << "It is uppercase";

    }
    else{
        cout << "It is Lowercase";
    }
    return 0;
}