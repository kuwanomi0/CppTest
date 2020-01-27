#include <bits/stdc++.h>
using namespace std;

int N;

int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    cin >> N; 
    cout << fib(N) << endl;
}