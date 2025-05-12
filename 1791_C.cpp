#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        long long l;
        cin>>l;
        string s;
        cin>>s;
 
        long long ans=l;
        long long left=0,right=l-1;
        while (left<=right){
            if (s[left]!=s[right])
                ans-=2;
            else
                break;
            left++;
            right--;
        }
        cout<<ans<<endl;
    }
}