#include <iostream>
using namespace std;
int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int N = 0, K = 0;
	cin >> N >> K; // 인풋 받기
	int* rooms = new int[13](); // 배열 초기화
	int room_num = 0; // 방개수 정의
	for (int i = 0; i < N; i++) {
		int gender = 0, grade = 0;
		cin >> gender >> grade; // 성별, 학년 받기
		rooms[gender * 6 + grade]++; // 성별, 학년을 이용한 배열
	}
	for (int i = 0; i < 13; i++) {
		room_num += (rooms[i] + K - 1) / K;
	}// 일반적인 상황을 처리하기 위해 k-1 더하고 k로 나누기
	cout << room_num; // 방개수 출력
	delete[] rooms; //메모리 초기화
}