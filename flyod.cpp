#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout << "Enter number of iterations ";
    cin >> n;
    static int a=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout << a <<" ";
            a++;
        }
        cout << endl;
    }
    return 0;
}