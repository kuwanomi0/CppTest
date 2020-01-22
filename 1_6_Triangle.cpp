#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1000000;

int main() {
    // 入力
    int n, a[MAX_N];
    int ans = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // 棒を
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n ; k++ ) {
                int len = a[i] + a[j] + a[k];           // 周長
                int ma = max(a[i], max(a[j], a[k]));    // 最も長い棒の長さ
                int rest = len - ma;                    // 他の2本の棒の長さの和

                if (ma < rest) {
                    // 参加系が作れるので、答えを更新できれば更新。
                    ans = max(ans, len);
                }
            }
        }
    }
    printf("%d\n", ans);
}