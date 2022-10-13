#include <iostream>
#include <string>
using namespace std;
int main(){ 
    long  a ,b, c,d , out;
    cin >> a >> b >> c >> d ;
    int a1 = a%100;
    int b1 = b%100;
    int c1 = c%100;
    int d1 = d%100;
    out = (a1*b1*c1*d1)%100;
    if (out<=9){
        cout << "0" << out << endl;
    }
    else cout << out ;
    return 0;
}