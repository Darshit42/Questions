#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        long long n;
        long long k;
        cin>>n>>k;

        {
            if(n%2==k%2){

                cout<<"YES"<<"\n";
            }else if(n%k==0){
                cout<<"YES"<<"\n";

            }
            else if(n%2==0){
                cout<<"YES"<<"\n";
            }
            else{
                cout<<"NO"<<"\n";
            }

        }
        t--;
    }

    return 0;
}