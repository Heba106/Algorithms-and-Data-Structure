// Problem URL : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q


    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        int n;
        cin >> n;
        string number;
        string arr[n];
        for (int i=0 ; i<n ; i++){
            cin >> arr[i];
        }
        for (int i=0 ; i<n ; i++){
            number= arr[i];
            for (int j =number.length()-1 ; j>=0 ; j--){
                cout << number[j] <<" ";
            }
            cout << endl;
        }
        return 0;
    }