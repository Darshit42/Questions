#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int l;
        cin>>l;
        int ans=0;
        int flag=0;
        if(l%2==0){
            flag=1;
        }
        while(l--){
            int x;
            cin>>x;
            ans^=x;
        }
        if(flag==1){
            if((ans^0)!=0){
                cout<<-1<<"\n";
            }else{
                cout<<ans<<"\n";
            }
        }else{
            cout<<(ans);
            cout<<"\n";
        }
    }
}