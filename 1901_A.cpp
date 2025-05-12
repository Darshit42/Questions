#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;
    cin>>n;
    while(n>0){
        int l;
        int goal;
        int ans;
        cin>>l;
        cin>>goal;

        vector<int> arr(l);
        for(int i=0;i<l;i++){
            cin>>arr[i];;
        }

        ans=arr[0];

        for(int i=1;i<l;i++){
            ans=max(arr[i]-arr[i-1],ans);
        }

        ans=max(ans,(goal-arr[l-1])*2);

        cout<<ans<<"\n";
        
        
        
        n--;
    }

    return 0;
}