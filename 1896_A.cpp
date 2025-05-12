#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n>0){
        int k;
        cin>>k;
        int fir;
        cin>>fir;
        k--;
        string ans="YES";
        while(k>0){
            int a;
            cin>>a;
            if(fir>a){
                ans="NO";
            }
            k--;
        }
        cout<<ans<<"\n";
        n--;
    }
}