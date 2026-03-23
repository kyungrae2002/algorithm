#include <iostream>
using namespace std;
int main(void) {
	int N;
	cin >> N;
	int store[10]{}; // 저장할 빈 배열
	do { // N 자리에 0이 들어올 수 있으니
		// 6, 9는 하나로 처리
		if (N % 10 == 6 || N % 10 == 9) {
			store[6]++;
		}
		else {
			store[N % 10]++;
		}
		N /= 10;
	} while (N);
	// 짝수 개든 홀수 개든 알아서 처리할 수 있도록
	store[6] = (store[6] + 1) / 2;
	int max = 0;
	// 최대값 찾기 알고리즘
	for (int i = 0; i < 10; i++) {
		max = (max > store[i]) ? max : store[i];
	}
	cout << max;
}