#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int ans=INT32_MAX;
    while(t>0){
        int x;
        cin>>x;
        ans=ans<abs(x)?ans:abs(x);

        t--;
    }
    cout<<ans<<"\n";

    return 0;
}