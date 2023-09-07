// https://www.codechef.com/problems/CHEFARRP

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        int count = n;
        for (int i = 0; i < n; ++i) {
            int sum = v[i], prod = v[i];
            for (int j = i + 1; j < n; ++j) {
                sum += v[j];
                prod *= v[j];
                if (sum == prod) {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}