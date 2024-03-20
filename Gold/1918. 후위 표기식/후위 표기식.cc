#include <iostream>
#include <string>
#define STACK_SIZE 100
using namespace std;
class Stack {
    string postfix; 
    char array[STACK_SIZE] = { 0 }; 
    int top; 
public: 
    Stack() { 
        top = -1;
    }

    void init() {
        top = -1; 
    }

    void push(char element) { 
        if (is_full() == true) {
            cout << "스택이 가득 찬 상태라서 push 함수를 실행할 수 없습니다." << endl; 
        }
        else {
            array[++top] = element; 
        }
    }

    char pop() { 
        if (is_empty() == true) { 
            cout << "스택이 빈 상태라 pop 함수를 실행할 수 없습니다." << endl;
        }
        else { 
            return array[top--]; 
        }
    }

    char peek() {
        if (is_empty() == true) { 
            cout << "스택이 빈 상태라 peek 함수를 실행할 수 없습니다." << endl; 
        }
        else { 
            return array[top]; 
        }
    }

    bool is_empty() { 
        if (top == -1) {
            return true;
        }
        else { 
            return false; 
        }
    }

    bool is_full() { 
        if (top == STACK_SIZE - 1) {
            return true;
        }
        else { 
            return false;
        }
    }
};
int oper_compare(char oper) { 
    switch (oper) { 
    case '+': case '-': 
        return 1; 
        break; 
    case '*':case '/': 
        return 2; 
        break; 
    case '(': case ')':
        return 0; 
        break; 
    }
}
string infix_to_postfix(string mathmetic) { 
    Stack oper;
    string postfix; 
    char tmp = 0; 
    oper.init();
    for (int i = 0; i < mathmetic.length(); i++) { 
        if (mathmetic[i] >= 'A' && mathmetic[i] <= 'Z') {
            postfix += mathmetic[i]; 
        }
        else { 
            if (mathmetic[i] == '+' || mathmetic[i] == '-' || mathmetic[i] == '*' || mathmetic[i] == '/') { 
                while (oper.is_empty() == false && oper_compare(mathmetic[i]) <= oper_compare(oper.peek())) { 
                    postfix += oper.pop();
                }
                oper.push(mathmetic[i]); 
            }

            else if (mathmetic[i] == '(') {
                oper.push(mathmetic[i]); 
            }

            else if (mathmetic[i] == ')') { 
                tmp = oper.pop();
                while (tmp != '(') { 
                    postfix += tmp;
                    tmp = oper.pop(); 
                } 
            }
        }
    }
    while (oper.is_empty() == false) {
        postfix += oper.pop();
    }
    return postfix;
}
int main() {
    string mathmetic;
    cin >> mathmetic;
    cout << infix_to_postfix(mathmetic);
}