#include <iostream>
using namespace std;
int factorial(int f){
    int p=1;
    while(f>0){
        p=p*f;
        f=f-1;

    }
    return p;

}
int main(){
    int f;
    cout << "Enter the number whose factorial is to be found ";
    cin >> f;
    int res=factorial(f);
    cout << "Factorial is " << res;

    return 0;
}
