// Problem URL : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/L


    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        int a , b , r;
        cin >> a >> b ;
        while (a%b > 0){
            r =a %b;
            a = b;
            b = r;
        }
        cout << b;
        return 0;
    }