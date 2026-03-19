#include <iostream>
#include <string>
using namespace std;

int main() { 
	string S;
	cin >> S;
	int i = 0, count = 0;
	while (S[i] != '\0') {
		count++;
		i++;
	}
	cout << count << endl;
}