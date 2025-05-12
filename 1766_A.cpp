#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n>0){
        int k;
        cin>>k;
        
        int a=0;
        while(k>0){
            if(k>10){
                a+=9;
                k/=10;
            }else{
                a+=k;
                k=0;
            }
        }
        // if(k<=9){
        //     a=k;
        // }
        // else if (k<=100){
        //     a=9+k/10;
        // }
        cout<<a<<"\n";
        n--;
    }
}