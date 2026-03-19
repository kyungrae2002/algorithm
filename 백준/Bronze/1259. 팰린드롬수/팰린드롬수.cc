#include <iostream>
#include <string>
using namespace std;
int main() {
	while (true) {
		string number;
		cin >> number;
		string numbertocompare = number;
		if (number == "0") {
			break;
		}
		else {
			if(number.length() %2 ==0){
				for (int i = 0; i < number.length()/2; i++) {
					swap(number[i], number[number.length() - i-1]);
				}
			}
			else {
				for (int i = 0; i < (number.length() - 1) / 2; i++) {
					swap(number[i], number[number.length() - i-1]);
				}
			}
		}
		if (number == numbertocompare) { cout << "yes" << endl; }
		else { cout << "no" << endl; }
	}
}