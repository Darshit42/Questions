#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        long long a[k];
        for(int i=0;i<k;i++){
            cin>>a[i];
        }
        int flag=0;
        for(int i=1;i<k-1;i++){
            if(a[i-1]<a[i]&&a[i+1]<a[i]){
                cout<<"YES"<<endl;
                cout<<i<<" "<<i+1<<" "<<i+2<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"NO"<<endl;
        }
    }
}