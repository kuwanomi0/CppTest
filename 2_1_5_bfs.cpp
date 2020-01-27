#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 50;
int A[MAX_N];
int N, K;

bool dfs(int i, int sum) {
    if (i == N) return sum == K;
    if (dfs(i + 1, sum)) return true;
    if (dfs(i + 1, sum + A[i])) return true; 
    return false;
}

void solve() {
    if (dfs(0, 0)) printf("Yes\n");
    else printf("No\n");
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    cin >> K;

    solve();
}