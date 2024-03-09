#include <bits/stdc++.h>

using namespace std;
using namespace std;

int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int x;
        cin >> x;

        vector<long long int> v(x);
        for (long long int i = 0; i < x; i++) {
            cin >> v[i];
        }

        long long int sum = accumulate(v.begin(), v.end(), 0LL);
        
        if (sqrt(sum) == round(sqrt(sum))) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
