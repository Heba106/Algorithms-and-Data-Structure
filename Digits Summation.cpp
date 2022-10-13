#include <iostream>
#include <string>
using namespace std;
int main(){
    long long n1 , n2;
    cin >> n1; cin >> n2;
    n1 %= 10;
    n2 %= 10;
    cout << (n1+n2) <<endl ;
    return 0;
}