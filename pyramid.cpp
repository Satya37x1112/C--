#include <iostream>
using namespace std;
int main(){
    int n,i,j,s,a;
    cout << "Enter number of iterations ";
    cin >> n;
    for(i=0;i<n;i++){
        for(s=1;s<n-i;s++){
            cout << " ";
        }

        for(j=1;j<=i+1;j++){
            cout << j ;
        }
        for(a=i;a>0;a--){
            cout << a ;
            
        }
        cout << endl;
    }
    return 0;
}