#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int ans=-1;
        if(b>d){
            cout<<ans<<"\n";
            continue;
        }
        while(b<d){
            b++;
            ans++;
            a++;
        }
        if(a<c){
            ans=-1;
        }else{
            while(a>c){
                a--;
                ans++;
            }
            ans++;
        }
            
        // ans+=abs(b-d);
        // a+=abs(b-d);
        // ans+=abs(a-c);
        // ans++;
        // if(a-c<0){
        //     ans=-1;
        // }
        cout<<ans<<"\n";
    }
}