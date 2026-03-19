#include <string.h>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	vector<int> v1(26);
	string word;
	cin >> word;
	for (int el : word)
		v1[el - 97]++;
	for (int el : v1)
		cout << el<<' ';
}