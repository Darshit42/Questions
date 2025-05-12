#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n>0){
        int k;
        cin>>k;
        int a=0;
        int b=0;
        int diff=0;
        cin>>b;
        k--;
        int minDiff=1000000001;
        while(k>0){
            a=b;
            cin>>b;
            diff=b-a;
            minDiff=minDiff<diff?minDiff:diff;

            k--;
        }
        if(minDiff>=0){
            cout<<minDiff/2+1<<"\n";
        }else{
            cout<<0<<"\n";
        }
        n--;
    }
}