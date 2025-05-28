#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int x, k;
        string s;
        cin>>x>>k>>s;

        int c0=0,c1=0;
        for (char c:s) {
            if (c == '0') c0++;
            else c1++;
        }

        int max= std::abs((c0/2)-(c1/2));
        int total=(c0/2)+(c1/2);
        if (k<=max&&(total!=max||total==1)) {
            cout <<"YES\n";
        } else {
            cout <<"NO\n";
        }
    }
    return 0;
}
