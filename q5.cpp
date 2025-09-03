#include <iostream>
#include <stack>
#include <cctype>
using namespace std;

int evaluatePostfix(string postfix) {
    stack<int> s;

    for (char ch : postfix) {
      
        if (isdigit(ch)) {
            s.push(ch - '0');  
        }
        
        else {
            int val1 = s.top(); s.pop();
            int val2 = s.top(); s.pop();

            switch (ch) {
                case '+': s.push(val2 + val1); break;
                case '-': s.push(val2 - val1); break;
                case '*': s.push(val2 * val1); break;
                case '/': s.push(val2 / val1); break;
                case '^': s.push((int)pow(val2, val1)); break;
            }
        }
    }
    return s.top();
}

int main() {
    string postfix;
    cout << "Enter postfix expression (single-digit operands): ";
    cin >> postfix;

    int result = evaluatePostfix(postfix);
    cout << "Result = " << result << endl;

    return 0;
}
