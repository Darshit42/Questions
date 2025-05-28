#include <bits/stdc++.h>
using namespace std;
 
int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};
 
int main(){
    int n;
    cin >> n;
    while (n--){
        long long a, b;
        cin >> a >> b;
        long long xk, yk;
        cin >> xk >> yk;
        long long xq, yq;
        cin >> xq >> yq;
        set<pair<int,int>> king_dangers, queen_dangers;
 
        for(int i = 0; i < 4; i++){
            king_dangers.insert({xk+dx[i]*a, yk+dy[i]*b});
            king_dangers.insert({xk+dx[i]*b, yk+dy[i]*a});
 
            queen_dangers.insert({xq+dx[i]*a, yq+dy[i]*b});
            queen_dangers.insert({xq+dx[i]*b, yq+dy[i]*a});
        }
 
        int ans = 0;
        for(auto it : king_dangers)
            if(queen_dangers.find(it) != queen_dangers.end())
                ans++;
        
        cout << ans << endl;
    }
    return 0;
}
 