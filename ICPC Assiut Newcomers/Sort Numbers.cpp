#include <iostream>
#include <string>
using namespace std;
int main(){
    int a,b,c ,n1 ,n2,n3;
    cin>> a >> b >> c;
    if (a<b){
        n1=a;
        n2=b;
    }else {
        n1=b;
        n2=a;
    }
    if (n2>c){
        n3=n2;
        if (n1>c){
            n2=n1;
            n1=c;
        } else {
            n2=c;
        }
    }
    else{
        n3=c;
    }

    cout << n1 << endl <<n2 << endl << n3 << endl << endl << a <<endl << b << endl <<c <<endl; 
    return 0;
}