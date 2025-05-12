#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int l;
        cin>>l;
        int ans=0;
        int curr=0;
        for(int i=0;i<l;i++){
            int x;
            cin>>x;
            if(x==0) curr++;
            else curr=0;
            ans=ans>curr?ans:curr;
        }
        cout<<ans<<"\n";
    }
}