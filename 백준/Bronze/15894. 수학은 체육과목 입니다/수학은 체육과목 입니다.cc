#include <iostream>
using namespace std;
int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(0);
    long long n;
    cin >> n;
    cout << 4 * (n*(n+1)/2) - 2*(n*(n-1));
}