#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n>0){
        int a,b,c;
        cin>>a>>b>>c;

        if(c%2==1){
            if(a>=b){
                cout<<"First"<<"\n";
            }else{
                cout<<"Second\n";
            }
        }else{
            if(b>=a){
                cout<<"Second\n";
            }else{
                cout<<"First"<<"\n";
            }
        }

        n--;
    }
}