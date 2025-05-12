#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n>0){
        int k;
        map<int, int> freq;
        cin>>k;
        

        while(k>0){
            int a;
            cin>>a;
            freq[a]++;
            k--;
        }

        if (freq.size() > 2) {
            cout << "No\n";
        } else if (freq.size() == 1) {
            cout << "Yes\n";
        } else{
            auto it = freq.begin();
            int a = it->first;
            int count_a = it->second;
            ++it;
            int b = it->first;
            int count_b = it->second;

            if (abs(count_a - count_b) <= 1) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }

        }
        n--;
    }

    return 0;
}