#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int l;
        cin>>l;
        int a[l];
        int total=0;
        for(int i=0;i<l;++i) {
            cin>>a[i];
            if(a[i]==2) total++;
        }

        int curr=0;
        int ans=-1;
        for(int i=0;i<l-1;++i) {
            if(a[i]==2)curr++;

            if(curr==total-curr) {
                ans=i+1;
                break;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
