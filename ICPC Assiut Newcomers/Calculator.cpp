#include <iostream>
#include <string>
using namespace std;
int main(){
    long long a,b;
    char oper;
    cin >> a ; cin >> oper; cin >> b;
    switch (oper){
        case '+':
            cout << a+b ;
            break;
        case '-':
            cout << a-b;
            break;
        case '*':
            cout << a*b ;
            break;
        case '/' :
            cout << a/b ;
            break;                
    }
    return 0;
}