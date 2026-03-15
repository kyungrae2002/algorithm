#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(0);
	long long N;
	cin >> N;
	while(true) {
		bool is_pal = true;
		bool is_prime = true;
		vector<int> vec{};

		long long a = N;
		if (N == 1) {
			N++;
			continue;
		}
		while (a) {
			vec.push_back(a % 10);
			a /= 10;
		}
		for (long long i = 0; i < vec.size() / 2; i++) {
			if (vec[i] != vec[vec.size() - 1 - i]) {
				is_pal = false;
				break;
			}
		}
		if (!is_pal) {
			N++;
			continue;
		}
		for (long long i = 2; i <= sqrt(N); i++) {
			if (N % i == 0) {
				is_prime = false;
				break;
			}
		}
		if (!is_prime) {
			N++;
			continue;
		}
		cout << N;
		break;
	}
}