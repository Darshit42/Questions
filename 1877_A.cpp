#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin>>n;
    while(n--){
        int ans = 0;
        for(int i=0;i<10;i++){
            string s; 
            cin>>s;
            for(int j=0;j<10;j++)
                if(s[j]=='X')
                {
                    ans += 5 - max(abs(i-4.5), abs(j-4.5));
                }
        }
        cout<<ans<<'\n';
    }
}
