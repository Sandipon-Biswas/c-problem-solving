#include <iostream>
#include <cmath>

using namespace std;

bool p(int a) {
    if (a < 2) return false;
    if (a <= 3) return true;
    if (a % 2 == 0) return false;
    for (int i = 3; i * i <= a; i = i + 2) {
        if (a % i == 0) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (p(n))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}