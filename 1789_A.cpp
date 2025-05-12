#include<iostream>
using namespace std;

long long gcd(long long a, long long b){
    return b == 0 ? a : gcd(b, a % b);
}

int main(){
    int n;
    cin >> n;
    while(n--){
        long long l;
        cin>>l;
        long long a[l];
        for(int i=0;i<l;i++){
            cin >> a[i];
        }
        int flag=0;
        for(int i=0;i<l;i++){
            for(int j=i+1;j<l;j++){
                if(gcd(a[i],a[j])<=2){
                    flag=1;
                }
            }
        }
        if(flag==0){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
}
