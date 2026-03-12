#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void) {
    string input;
    cin >> input;
    stack<int> st{};
    int tot = 0;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == '(') {
            st.push('(');
        }
        else {
            if (i != 0 && input[i - 1] == ')') {
                tot += 1;
                st.pop();
            }
            else {
                st.pop();
                tot += st.size();
            }
        }
    }
    cout << tot;
}