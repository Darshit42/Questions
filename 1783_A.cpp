#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n>0){
        long long l;
        cin>>l;

        long long a[l];

        for(int i=0;i<l;i++){
            cin>>a[i];
        }
        sort(a,a+l);
        long long max=a[l-1];
        long long min=a[0];
        if(max==min){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            cout<<max<<" ";
            for(int i=0;i<l-1;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        n--;
    }
}
