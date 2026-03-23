#include <iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N = 0;
	cin >> N; // 원소 받기
	//동적 할당으로 배열 정의
	int* list = new int[N];
	for (int i = 0; i < N; i++) {
		//원소 받기
		int m = 0;
		cin >> m;
		list[i] = m;
	}
	// 인풋 숫자 초기화
	int target = 0;
	// count 횟수 초기화
	int count = 0;
	cin >> target;
	// 인풋 받기
	// 동적 할당으로 정의 (값을 저장할 배열 (배열 원소 찾기 O(1)), 초기화
	int* search = new int[target+1]();
	for (int i = 0; i < N; i++) {
		if (target < list[i]) { continue; }
		// list[i] 값이 크다면 인덱싱 오류, 패스
		if (search[target - list[i]] >= 1) { count++; }
		// 타겟 - 원소로 인덱싱하여 그 값을 찾고, 그 값이 앞서 나왔다면 count 증가
		search[list[i]]++;
		// 나왔다면 원소 값 1증가
	}
	delete[] list; // 동적 할당 메모리 날리기
	delete[] search;
	cout << count << '\n';
}