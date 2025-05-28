#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int l;
        cin>>l;
        int k;
        cin>>k;
        int prev=0;
        int maxl=0;
        int currl=0;
        for(int i=0;i<l;i++){
            int x;
            cin>>x;
            if(i==0){
                prev=x;
            }else{
                if(std::abs(x-prev)<=k){
                    currl++;
                    maxl=maxl>currl?maxl:currl;
                }else{
                    currl=0;
                }
            }
            prev=x;
        }
        cout<<l-maxl<<endl;
    }
}