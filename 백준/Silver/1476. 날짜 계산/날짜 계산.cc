#include <iostream>
#include <math.h>
using namespace std;

int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int E, S, M = 0;
	int E1 =1, S1 = 1, M1 = 1;
	cin >> E >> S >> M;
	int cnt = 1;
	while (E1 != E || S1 != S || M1 != M) {
		E1++;
		S1++;
		M1++;
		if (E1 > 15)
			E1 = 1;
		if (S1 > 28)
			S1 = 1;
		if (M1 > 19)
			M1 = 1;
		cnt++;
	}
	cout << cnt;

}