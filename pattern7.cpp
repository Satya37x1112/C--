#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout << "Enter number of iterations ";
    cin >> n;
    for(i=1;i<=n;i++){
        for(j=i;j>0;j--){
            cout << j <<" ";
        }
        cout << endl;
    }
    return 0;
}