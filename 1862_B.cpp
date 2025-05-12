#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int main(){
    int n;
    cin >> n;
    while(n--){
            long long p;
            cin>>p;
            vector<long long> arr(p),a;
            for(int i=0;i<p;i++){
                cin>>arr[i];
            }
            a.push_back(arr[0]);
            for(int i=1;i<p;i++){
                if(arr[i]>=arr[i-1]){
                    a.push_back(arr[i]);
                } else {
                    a.push_back(arr[i]);
                    a.push_back(arr[i]);
                }
            }
            cout<<a.size()<<endl;
            for(auto it : a){
                cout<<it<<" ";
            }
            cout << endl;
        
    }
}