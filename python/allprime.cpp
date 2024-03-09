#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    if (n == 2) return true;
    if (n % 2 == 0 || n == 1) return false;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

bool hasTwoPrimeFactors(int n) {
    int count = 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0 && isPrime(i)) {
            count++;
        }
    }
    return count == 2;
}

int main() {
    int n;
    cin >> n;

    int totalCount = 0;
    for (int i = 1; i <= n; i++) {
        if (hasTwoPrimeFactors(i)) {
            totalCount++;
        }
    }

    cout << totalCount << endl;
    return 0;
}
