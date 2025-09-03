#include <iostream>
using namespace std;

#define MAX 100  

class stack {
    int size;       
    char arr[MAX];  
    int top;

public:
    stack(int n) {
        size = n;
        top = -1;
    }

    bool isfull() {
        return (top == size - 1);
    }

    bool isempty() {
        return (top == -1);
    }

    void pushString(string str) {
        if (str.length() > size) {
            cout << "String too long for stack!\n";
            return;
        }
        for (int i = 0; i < str.length(); i++) {
            arr[++top] = str[i];
        }
        cout << "String pushed into stack.\n";
    }

    void display() {
        if (isempty()) {
            cout << "Stack is empty!\n";
        } else {
            cout << "Stack contents (top to bottom): ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i];  
            }
            cout << "\n";
        }
    }
};

int main() {
    int x;
    cout << "Enter the size of string: ";
    cin >> x;

    stack s(x);

    string str;
    cout << "Enter the string: ";
    cin >> str;

    s.pushString(str);
    s.display();

    return 0;
}

