#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    while(n>0){
        int l;
        int k;

        cin>>l;
        cin>>k;

        int arr[l];

        for(int i=0;i<l;i++){
            int x;
            cin>>x;

            arr[i]=x;
        }

        if(k>1){
            cout<<"YES"<<"\n";
        }
        else{
            bool flag=true;
            for(int i=1;i<l;i++){
                if(arr[i]<arr[i-1]){
                    flag=false;
                    break;
                }
            }
            if(flag){
                cout<<"YES"<<"\n";
            }else{

                cout<<"NO"<<"\n";
            }
        }
        
        
        n--;
    }


  return 0;
}