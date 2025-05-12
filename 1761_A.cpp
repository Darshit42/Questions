#include<iostream>
using namespace std;

int main(){
    int k;
    cin>>k;

    while(k>0){
        int n,p,q;
        cin>>n>>p>>q;

        if((p==n&&q==n)||(p+q+1<n)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
        k--;
    }
}