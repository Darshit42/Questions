#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int o=0;
        int z=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                o++;
            }else{
                z++;
            }
        }
        int ops=min(o,z);
        if(ops%2==1){
            cout<<"DA"<<endl;
        }else{
            cout<<"NET"<<endl;
        }
    }
}