#include <iostream>
#include <vector>
#define ll long long

using namespace std;

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        ll n, k;
        cin >> n >> k;
        vector<int> v(n);
        
        // Input elements into the vector
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        // Iterate over k steps
        for(int i = 1; i <= k; i++) {
            if(i % 2 != 0) {
                // If it's an odd step, subtract 1 from the first element
                if (v[0] == 1) {
                    v.erase(v.begin());
                } else {
                    v[0] = v[0] - 1;
                }
            } else {
                // If it's an even step, subtract 1 from the last element
                int last_index = v.size() - 1;
                if (v[last_index] == 1) {
                    v.pop_back();
                } else {
                    v[last_index] = v[last_index] - 1;
                }
            }
        }

        // Output the count of remaining elements
        cout << n - v.size() << endl;
    }

    return 0;
}
