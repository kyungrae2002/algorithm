#include <iostream>
#include <vector>
using namespace std;
int main(void) {
	int a;
	cin >> a; // 인풋 cin 으로 받기
	vector<int> vec{}; // 빈 벡터 생성 (인풋 받기)
	for (int i = 0; i < a; i++) { 
		int b; 
		cin >> b; // 여러개의 인풋 받기 
		vec.push_back(b); // 받아서 생성한 벡터에 추가
	}
	int num = 0;
	int target;
	cin >> target;
	int *arr = new int[target];
	// 시간을 보고 O(N) 안에 해결해야 하므로, 배열 생성 -> 따로 저장
	// 동적할당으로 따로 저장하려고 함 (원소 찾기 배열)
	for (int i = 0; i < target; i++) {
		arr[i] = 0; // 동적 할당 배열 0초기화
	}
	for (int i = 0; i < vec.size(); i++) {
		if(target-vec[i]-1 >=0){ //segmentation error 핸들링
			if (arr[target - vec[i] - 1] != 0) {
				num++; // 배열의 원소를 찾는 것은 O(1) 안에 찾으므로
			}
		}
		if(vec[i]-1 < target) // segmentation error 핸들링
			arr[vec[i] - 1]++; // 앞선 원소 찾기 배열에서 해당 인덱스에 해당하는 값 1증가
	}
	delete[] arr; // 메모리 해제
	cout << num << '\n';
}