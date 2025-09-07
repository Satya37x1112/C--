#include <iostream>
using namespace std;
int sum(int n){
    int i,s=0;
    for(i=1;i<=n;i++)
    {
      s=s+i;
    }
    return s;
}
int main(){
    int n;
    cout << "Enter number of Iterations ";
    cin >> n;
    int res = sum(n);
    cout << "Sum upto N iterations is " << res;


    return 0;
}