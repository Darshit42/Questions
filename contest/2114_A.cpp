#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int a=std::stoi(s);

        int r = std::round(std::sqrt(a));
        if(r*r == a){
            cout<<"0 "<<r <<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
}