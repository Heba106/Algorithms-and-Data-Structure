#include <iostream>
#include <string>
using namespace std;
int main(){
    long long n;
    cin >> n;
    while (n>9){
        n/=10;
    }
    if ((n%2)==0){
        cout << "EVEN";
    }
    else {
        cout << "ODD";
    }
    return 0;
}