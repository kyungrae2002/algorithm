#include <iostream>
#include <string>
using namespace std;

int main() { 
	int T;
	cin >> T;
	string* szList = new string[T];
	for (int i = 0; i < T; i++) {
		string list;
		cin >> list;
		szList[i] = string(1, list[0]) + string(1, list[list.length() - 1]);
	}
	for (int i = 0; i < T; i++) {
		cout << szList[i] << endl;
	}
}