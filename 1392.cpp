#include <bits/stdc++.h>
using namespace std;
int const MOD = 1e9 + 7;
using i64 = long long;
const int mxN = 100;


int main() {
    int n, m;
    cin >> n >> m;
    vector<int> ans;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        int j = 1;
        while (j < x) {
            ans.push_back(j);
            j++;
        }
    }
    for (auto &it : ans)
        cout << it << "\n";
    return 0;
}   


