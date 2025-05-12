#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int k;
        cin>>k;
        int x=a%k;
        if(x!=0){
            cout<<a<<"\n";
        }else{
            cout<<a-1+" "+1<<"\n";
        }
    }
}