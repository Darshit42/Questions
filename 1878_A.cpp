#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n>0){
        int k;
        cin>>k;
        int a;
        cin>>a;
        string ans="NO";

        while(k>0){
            int b;
            cin>>b;
            if(a==b){
                ans="YES";
            }

            k--;
        }
        cout<<ans<<"\n";
        n--;
    }

    return 0;
}