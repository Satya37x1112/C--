#include <iostream>
using namespace std;
int main(){
    int n,i,count=0;
    cout << "Enter the number to be checked ";
    cin >> n;
    for(i=2;i*i<=n;i++){
        if(n%2==0){
            count++;
            break;
        }

    }
    if(count==1){
        cout << "Entered number is composite " << n;
    }
    else{
        cout << "Entered number is prime " << n;
    }
    return 0;
}