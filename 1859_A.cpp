#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    while(n>0){
        long long k;
        cin>>k;
        vector<long long> a(k);
        for(int i=0;i<k;i++){
            cin>>a[i];
        }

        long long max= *max_element(a.begin(),a.end());
        vector<long long> b,c;
        for(int i=0;i<k;i++){
            if(a[i]!=max){
                b.push_back(a[i]);
            }
            else{
                c.push_back(a[i]);
            }
        }
        if(b.size()==0){
            cout<<-1<<endl;
        }else{
            cout<<b.size()<<" "<<c.size()<<endl;
            for(auto it:b){
                cout<<it<<" ";
            }
            cout<<endl;
            for(auto it:c){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        n--;
    }
}