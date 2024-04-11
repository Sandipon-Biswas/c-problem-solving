#include <iostream>
#include <vector>
#define int long long
using namespace std;

// Function to process each test case
void process_test_case() {
    // Input number of elements and number of operations
    int n, k;
    cin >> n >> k;
    
    // Input the list of elements
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    // Iterate over k steps
    for (int i = 1; i <= k; ++i) {
        if (!v.empty()) {
            if (i % 2 != 0) {
                if (v[0] == 1) {
                    v.erase(v.begin());  // Remove the first element
                } else {
                    v[0] -= 1;
                }
            } else {
                if (v.back() == 1) {
                    v.pop_back();  // Remove the last element
                } else {
                    v.back() -= 1;
                }
            }
        }
    }
    
    // Output the count of remaining elements
    cout << (v.empty() ? n : n - v.size()) << endl;
}

int main() {
    // Input number of test cases
    int tt;
    cin >> tt;

    // Process each test case
    while (tt--) {
        process_test_case();
    }

    return 0;
}
