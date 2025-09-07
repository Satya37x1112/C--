#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout << "Enter number of iterations ";
    cin >> n;
    static char ch='A';
    for(i=1;i<=n;i++){
        
        for(j=1;j<=n;j++){
            
            cout << ch <<" ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}