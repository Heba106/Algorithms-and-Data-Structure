// Problem URL : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num, out="";
    int len;
    int myRes1 , myRes2;
    cin >> num;
    len = num.length();

    for (int i =len-1 ; i>=0 ; i--){
        out+=num[i];
    }
    myRes1=stoi(num);
    myRes2=stoi(out);
    cout << myRes2 << endl;
    if (myRes1==myRes2){
        cout<<"YES" <<endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}