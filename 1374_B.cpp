#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        int ans=-1;
        int three=0;
        int two=0;
        while(x%3==0){
            x/=3;
            three++;
        }
        while(x%2==0){
            x/=2;
            two++;
        }
        if(two>three){
            cout<<ans<<endl;
        }else{
            if(x!=1){
                cout<<ans<<endl;
            }else{
                ans=(three-two)*2+two;
                cout<<ans<<endl;
            }
        }
    }
}