/*
* 위에 있는 카드 바닥으로 bool end = true; 반복문 1차 순환
* true 인 상태에서 버리기 bool end = false;
* 이거 반복하면 될듯
* 그리고 만약에 끝=시작 이면 종료 -> while 문으로 하면 될듯
*/
#include <iostream>
using namespace std;
int arr[1000000]{};
int main(void) {
	int N;
	cin >> N;
	int start = 1;
	int bottom = N;
	for (int i = 0; i < N; i++) {
		arr[i+1] = i + 1;
	}
	bool end = true;
	while (bottom != start) {
		if (end) {
			end = false;
			start += 1;
		}
		else {
			end = true;
			arr[bottom + 1] = arr[start];
			start++;
			bottom++;
		}
	}
	cout << arr[bottom];
}