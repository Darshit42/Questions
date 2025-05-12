#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        long long k;
        cin>>k;
        long long a[k];
        for (int i=0;i<k;i++){
            cin>>a[i];
        }
        for (int i=0;i<k;i++){
            cout<<k+1-a[i]<<" ";
        }
        cout<<endl;
    }
}