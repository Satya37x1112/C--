#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout << "Enter the value of n ";
    cin >> n;
    while(n>0){
        sum+=n;
        n--;

    }
    cout << endl;
    cout << "The sum is "<< sum;


    return 0;
}