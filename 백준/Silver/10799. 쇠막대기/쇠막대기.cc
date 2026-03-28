#include <vector>
#include <iostream>
#include <string.h>
using namespace std;
/*
* 핵심은 레이저에 해당하는 부분과 아닌 부분 구현
* 레이저가 맞다면, 앞서 괄호가 (() <- 레이저
* (()) <- 레이저 아님 구분 기준 앞에 )) 였냐 아니면 (였냐
* 어떻게 구분할 거냐? 만약 앞에가 () 였다면 ispopped = true 스택에서 지운다고 생각하면 됨
* 여기서 (가 추가되면 ispopped = false로, 만약 ) 라면 ispopped = true 인 상태에서 ) 가
* 추가되었으니 laser로 취급하지 않는다. 그럼 레이저와 레이저와 아닌것은 어떤 차이가 있는가?
* 레이저면, stack에 pop 한후 쌓여있는 개수를 추가한다. 만약 레이저가 아니라면 +1을 한다.
* +1의 이유 : 쇠막대기의 끝이기 때문에 잘린 거 +1을 해준다고 생각하면 됨
*/
int main(void) {
	string p;
	cin >> p;
	int total = 0;
	vector<int> stack{};
	bool ispopped = false;
	for (char pp : p) {
		if (pp == '(') {
			ispopped = false;
			stack.push_back('(');
		}
		else {
			if (ispopped) {
				stack.pop_back();
				total += 1;
			}
			else {
				stack.pop_back();
				ispopped = true;
				total += stack.size();
			}
		}
	}
	cout << total;
}