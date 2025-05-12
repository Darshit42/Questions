#include<iostream>
using namespace std;



int main(){
    int first3[3];
    int third3[3];
    int second3[3];

    int n=3;
    while(n>0){
        cin>>first3[3-n];
        n--;
    }
    while(n<3){
        cin>>second3[n];
        n++;
    }
    while(n>=0){
        cin>>third3[2-n];
        n--;
    }
    int rings;
    cin>>rings;

    return 0;
}