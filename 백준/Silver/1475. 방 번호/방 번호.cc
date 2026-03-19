#include <iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	int arr[10]{};
	while (N >= 1) {
		arr[N % 10]+=1;
		N /= 10;
	}
	if (arr[6] - arr[9] >= 2) {
		arr[6] = arr[9] + (arr[6] - arr[9] + 1) / 2;
	}
	else if (arr[6] - arr[9] <= -2) {
		arr[9] = arr[6] + (arr[9] - arr[6] + 1 ) / 2;
	}
	int max = 0;
	for (int el : arr) {
		max = (max > el) ? max : el;
	}
	cout << max;
}