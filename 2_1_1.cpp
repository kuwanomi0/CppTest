#include <bits/stdc++.h>
using namespace std;

int n;

int fact(int n) {
    if (n == 0) return 1;
    return n * fact(n - 1);
}

int main() {
    int ans;
    
    scanf("%d", &n);
    
    ans = fact(n);

    printf("%d\n", ans);
}