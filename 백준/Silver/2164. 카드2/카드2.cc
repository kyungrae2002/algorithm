#include <iostream>
#include <vector>
using namespace std;
const int MAX = 1000000;
int Q[MAX]{};
int head, tail = 0;
int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int N;
	cin >> N;
	int check = 0;
	for (int i = 0; i < N; i++) {
		Q[i] = i + 1;
		tail++;
	} // 숫자 채우기
	while (tail != head+1) {
		if (check % 2 == 0) {
			head++;
		} // 버리기
		else {
			Q[++tail-1] = Q[head++];
		} // 이동 후 버리기
		check++;
	}
	cout << Q[tail-1];
}