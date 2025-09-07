#include <iostream>
using namespace std;
int main(){
    int n,i,p=1;
    cout << "Enter the number ";
    cin >> n;
    while(n>0){
        p=p*n;
        n=n-1;
    }
    cout << "Factorial of the number is " << p;
    return 0;
}