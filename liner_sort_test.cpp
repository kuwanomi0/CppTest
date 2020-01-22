#include <bits/stdc++.h>
using namespace std;

int n;
int a[11000];

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];
    
    bool res = false;
    for (int i = 0; i < n; ++i) {
        if (a[i] == 0) res = true;
    }

    if (res) cout << "Yes" << endl;
    else cout << "No" << endl;
}