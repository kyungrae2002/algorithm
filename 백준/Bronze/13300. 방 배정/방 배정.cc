#include <string.h>
#include <iostream>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, K;
	cin >> N >> K;
	int w[7] = { 0, }; // 여자 배열
	int m[7] = { 0, }; // 남자 배열
	for (int i = 0; i < N; i++) {
		int s, g;
		cin >> s >> g;
		if (s) { m[g]++; }
		else { w[g]++; }
	}
	int cnt = 0;
	for (int i = 1; i < 7; i++) {
		if (m[i] % K == 0) { cnt += m[i] / K; }
		if (m[i] % K != 0) { cnt += int(m[i] / K) +1; }
		if (w[i] % K == 0) { cnt += w[i] / K; }
		if (w[i] % K != 0) { cnt += int(w[i] / K) + 1; }
	}
	cout << cnt;
}