#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,k,x;
        cin>>n>>k>>x;

        if(k>1&&x!=1){
            cout<<"YES"<<"\n";
            cout<<n<<"\n";
            while(n>0){
                cout<<1<<" ";
                n--;
            }
            cout<<"\n";
        }else if(k>1&&x==1){
            if(n%2==0){
                cout<<"YES"<<"\n";
                cout<<n/2<<"\n";
                while(n>0){
                    cout<<2<<" ";
                    n-=2;
                }
                cout<<"\n";
            }else{
                if(k==2){
                    cout<<"NO"<<"\n";
                }
                else{
                    cout<<"YES"<<"\n";

                    n-=3;
                    cout<<1+n/2<<"\n";
                    cout<<"3 ";
                    while(n>0){
                        cout<<2<<" ";
                        n-=2;
                    }
                    cout<<"\n";
                }
            }
        }else{
            cout<<"NO"<<"\n";
        }

        t--;
    }

    return 0;
}