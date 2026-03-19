#include <iostream>
#include <deque>
using namespace std;

/* 원소를 매번 받는다.
* 해당원소까지 while문으로 위치를 조정해서 이동한다
* 이동한 거리만큼을 
*/

int main(void) {
	deque<int> dq{};
	int a, b;
	int tot = 0;
	cin >> a >> b;
	// 원소 채우기
	for (int i = 0; i < a; i++) {
		dq.push_back(i + 1);
	}

	for (int i = 0; i < b; i++) {
		int m = 0;
		cin >> m;
		int right = 0;
		int left = 0;
		while (dq.front() != m) {
			dq.push_back(dq.front());
			dq.pop_front();
			right++;
		}
		if (right > (dq.size() / 2)) {
			//복구
			for (int i = 0; i < right; i++) {
				dq.push_front(dq.back());
				dq.pop_back();
			}
			//더 작은 쪽에 대해서 큐 이동
			while (dq.front() != m) {
				dq.push_front(dq.back());
				dq.pop_back();
				left++;
			}
			tot += left;
		}
		else {
			tot += right;
		}
		dq.pop_front();		
	}
	cout << tot;
}