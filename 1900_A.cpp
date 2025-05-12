#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n>0){
        int l;
        cin>>l;

        string s;
        cin>>s;
        int ans=0;
        if(s.at(0)=='.'){
            ans++;
        }
        if(s.at(l-1)=='.'&&l!=1){
            ans++;
        }
        for(int i=1;i<l-1;i++){
            if(s.at(i)=='.'){
                if(s.at(i-1)=='.'&&s.at(i+1)=='.'){
                    ans=2;
                    break;
                }else{
                    ans++;
                }
            }
        }
        cout<<ans<<"\n";
        n--;
        
    }

    return 0;
}

