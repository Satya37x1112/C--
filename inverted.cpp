#include <iostream>
using namespace std;
int main(){
    int n,i,j,s;
    cout << "Enter number of iterations ";
    cin >> n;
    for(i=1;i<=n;i++){
        for(s=1;s<i;s++){
            cout <<" ";
        }
        for(j=0;j<=n-i;j++){
            cout << i ;
        }
        cout << endl;
    }
    return 0;
}