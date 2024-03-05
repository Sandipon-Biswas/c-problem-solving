#include <bits/stdc++.h>
using namespace std;

int drv(int a, int b, int l) {
    set<int> dv;

    for (int x = 0; x <= 100; ++x) { 
        for (int y = 0; y <= 100; ++y) {
            int k = l / (pow(a, x) * pow(b, y));
            if (k * pow(a, x) * pow(b, y) == l) {
                dv.insert(k);
            }
        }
    }

    return dv.size();
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int a, b, l;
        cin >> a >> b >> l;
        cout << drv(a, b, l) << endl;
    }

    return 0;
}
