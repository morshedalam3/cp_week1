#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int count = 0;
    for (int i = 0; i < n; i++) {
        int ti;
        cin >> ti;

        if (ti % k == 0) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}