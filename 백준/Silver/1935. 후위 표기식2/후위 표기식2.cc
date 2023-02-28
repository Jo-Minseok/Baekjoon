#include <iostream> 
#define STACK_SIZE 100

using namespace std;

template<typename T> 
class Stack {
    string postfix;
    T array[STACK_SIZE] = { 0 };
    int top;
public: 
    Stack() { 
        top = -1; 
    }

    void init() { 
        top = -1;
    }

    void push(T element) {
        if (is_full() == true) {
            cout << "스택이 가득 찬 상태라서 push 함수를 실행할 수 없습니다." << endl;
        }
        else { 
            array[++top] = element; 
        }
    }

    T pop() {
        if (is_empty() == true) { 
            cout << "스택이 빈 상태라 pop 함수를 실행할 수 없습니다." << endl; 
        }
        else { 
            return array[top--];
        }
    }

    T peek() {
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

long double calc_postfix(string postfix, long double num_arr[]) {
    long double num1, num2; 
    Stack<long double> num; 
    num.init(); 
    for (int index = 0; postfix[index] != '\0'; index++) {
        if (postfix[index] >= 'A' && postfix[index] <= 'Z') {
            num.push(num_arr[postfix[index] - 'A']);
        }
        else if (!num.is_empty()) { 
            switch (postfix[index]) {
            case '+': 
                num1 = num.pop(); 
                num2 = num.pop();
                num.push(num2 + num1);
                break; 
            case '-': 
                num1 = num.pop(); 
                num2 = num.pop();
                num.push(num2 - num1);
                break; 
            case '*': 
                num1 = num.pop(); 
                num2 = num.pop(); 
                num.push(num2 * num1); 
                break; 
            case '/': 
                num1 = num.pop();
                num2 = num.pop(); 
                num.push(num2 / num1);
                break;
            }
        }
    }
    return num.pop();
}

int main() {
    long double num_arr[26] = { 0 };
    int count;
    string postfix;
    cin >> count;
    cin >> postfix;
    for (int i = 0; i < count; i++) {
        cin >> num_arr[i];
    }
    cout << fixed;
    cout.precision(2);
    cout << calc_postfix(postfix, num_arr);
}