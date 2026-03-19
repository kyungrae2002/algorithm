#include <iostream>
#include <string.h>
using namespace std;
int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c;
	cin >> a >> b >> c;
	int d = a * b * c;
	int e[10] = { 0, };
	for (int i = 0; i < 10; i++) {
		if (d < 1) break;
		e[d % 10] += 1;
		d /= 10;
	}
	for (int el : e) { cout << el << '\n'; }
}