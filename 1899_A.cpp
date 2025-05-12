#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n>0){
        int k;
        cin>>k;
        if(k%3==0){
            cout<<"Second"<<"\n";
        }else{
            cout<<"First"<<"\n";
        }

        n--;
    }


    return 0;
}