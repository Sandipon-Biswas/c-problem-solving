#include <bits/stdc++.h>
using namespace std;

void _p(int x) {
    cout << x << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int si = 0;
    for(int i = 0; i < n; i++) {
        if (v[i] <= v[si]) {
            si = i;
        }
    }


    int bi = 0;
    for(int i = 0; i < n; i++) {
        if (v[i] > v[bi]) {
            bi = i;
        }
    }

    int r=bi+(n-si-1);
    if(bi>si)r--;
    _p(r);
    return 0;
}