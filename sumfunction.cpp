#include <iostream>
using namespace std;
int sum(int a,int b){
    int s=a+b;
    return s;
    }
int main(){
    int a,b;
    cout << "enter 1st number ";
    cin >> a;
    cout << "Enter 2nd number ";
    cin >> b;
    int res=sum(a,b);
    cout << "result is " << res;
    

    return 0;

}