#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout << "Enter the value of N ";
    cin >> n;
    while(n>0){
        if(n%2!=0){
            sum+=n;
        }
        n--;

    }
    cout << "The sum of odd numbers is " << sum;
    return 0;
}