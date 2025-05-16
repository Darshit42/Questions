#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n-->0){
        int k;
        cin>>k;
        int o=0;
        int e=0;
        while(k>0){
            int x;
            cin>>x;
            if(x%2==0){
                e++;
            }else{
                o++;
            }
            k--;
        }
        if(o>0&&e>0){
            if(o%2==0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else if(o>0){
            if(o%2==0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"YES"<<endl;
        }
    }
}