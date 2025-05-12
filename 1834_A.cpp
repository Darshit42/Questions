#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        long long a[k];
        for (long long i=0;i<k;i++){
            cin>>a[i];
        }
 
        long long pos=0;
        long long neg=0;
        for (int i=0;i<k;i++){
            if (a[i]==1)
                pos++;
            else
                neg++;
        }

        int ans=0;
        while(pos<neg||neg%2==1){
            ans++;
            pos++;
            neg--;
        }

        cout<<ans<<"\n";
    }
}