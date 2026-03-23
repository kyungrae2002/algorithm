#include <iostream>
using namespace std;
int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int N;
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		int m = 0;
		cin >> m;
		arr[i] = m;
	}
	int target = 0;
	int count = 0;
	cin >> target;
	for (int i = 0; i < N; i++) {
		if (arr[i] == target) {
			count++;
		}
	}
	cout << count << '\n';
}