#include <iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout << "Enter the value of ";
    cin >> n;
    for( i=0;i<=n;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    cout << "The sum of even numbers is " << sum;
    return 0;
}