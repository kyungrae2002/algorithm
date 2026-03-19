#include <iostream>
#include<string.h>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a, b;
	cin >> a >> b;
	int arr1[26]{};
	int arr2[26]{};
	for (int c : a) {
		arr1[c - 'a']++;
	}
	for (int c : b) {
		arr2[c - 'a']++;
	}
	int count = 0;
	for (int i = 0; i < 26; i++) {
		count += (arr1[i] > arr2[i]) ? (arr1[i] - arr2[i]) : (arr2[i] - arr1[i]);
	}
	cout << count;
}