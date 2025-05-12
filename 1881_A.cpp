#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n>0){
        string x;
        string s;
        int l1,l2;
        cin>>l1>>l2;
        cin>>x>>s;
        int ans=0;;
        int times=10;
        bool flag = true;
        while(times>0){
            size_t idx = x.find(s);
            
            if(idx != string::npos){
                cout << ans<<"\n";
                flag=false;
                break;
            }
            x+=x;
            ans++;
            times--;
            
        }
        if(flag){
            cout << -1<<"\n";
        }


        n--;
    }

    return 0;
}


int powerx(int n, int x){
    if(x==0){
        return 1;
    }
    if(x>0){
        return n*powerx(n,x-1);
    }else{
        return (1/n)*powerx(n,x+1);
    }
}