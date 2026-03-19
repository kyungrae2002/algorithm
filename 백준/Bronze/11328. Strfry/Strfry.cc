#include <iostream>
#include <string>
using namespace std;

string compare(string a, string b) {
	int arr[26]{};
	for (int c : a) {
		arr[c - 'a']++;
	}
	for (int c : b) {
		arr[c - 'a']--;
	}
	int count = 0;
	for (int i = 0; i < 26; i++) {
		count += abs(arr[i]);
	}
	if (count == 0) return "Possible";
	else return "Impossible";
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string a, b;
		cin >> a >> b;
		cout << compare(a, b)<<'\n';
	}
}