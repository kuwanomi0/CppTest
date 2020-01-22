#include <bits/stdc++.h>
using namespace std;

int MAX_N = 1000000;

int main() {
    int L, n;
    int x[MAX_N];

    // 入力
    scanf("%d %d", &L, &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    // 最小時間計算
    int minT = 0;
    for (int i = 0; i < n; i++) {
        minT = max(minT, min(x[i], L - x[i]));
    }

    // 最長時間計算
    int maxT = 0;
    for (int i = 0; i < n; i++) {
        maxT = max(maxT, max(x[i], L - x[i]));
    }

    // 出力
    printf("%d %d\n", minT, maxT);
}