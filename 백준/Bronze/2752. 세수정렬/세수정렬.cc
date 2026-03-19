#include <iostream>
using namespace std;

int main(void) {
	std::ios::sync_with_stdio(0);
	int arr[3];
	for (int i = 0; i < 3; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 2; i++) {
		for (int j = i; j < 3; j++) {
			if (arr[i] > arr[j]) {
				int temp = 0;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		cout << arr[i] << ' ';
	}

}

