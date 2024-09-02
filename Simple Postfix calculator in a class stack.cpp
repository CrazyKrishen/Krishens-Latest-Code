#include <iostream>
#include <stack>
#include <string>
#include <cstdlib> // For atoi function

using namespace std;

class PostfixCalculator {
private:
    stack<int> operandStack;

public:
    void pushOperand(int operand) {
        operandStack.push(operand);
    }

    int popOperand() {
        if (!operandStack.empty()) {
            int operand = operandStack.top();
            operandStack.pop();
            return operand;
        }
        return 0; // You might want to handle underflow differently
    }

    int topOperand() {
        if (!operandStack.empty()) {
            return operandStack.top();
        }
        return 0; // You might want to handle underflow differently
    }

    void evaluateExpression(const string& expression) {
        for (char ch : expression) {
            if (isdigit(ch)) {
                pushOperand(ch - '0');
            } else if (ch == ' ') {
                continue;
            } else {
                int operand2 = popOperand();
                int operand1 = popOperand();
                switch (ch) {
                    case '+':
                        pushOperand(operand1 + operand2);
                        break;
                    case '-':
                        pushOperand(operand1 - operand2);
                        break;
                    case '*':
                        pushOperand(operand1 * operand2);
                        break;
                    case '/':
                        pushOperand(operand1 / operand2);
                        break;
                    default:
                        cerr << "Invalid operator encountered: " << ch << endl;
                        return;
                }
            }
        }
    }

    int getResult() {
        return topOperand();
    }
};

int main() {
    string expression;
    cout << "Enter a postfix expression: ";
    getline(cin, expression);

    PostfixCalculator calculator;
    calculator.evaluateExpression(expression);

    cout << "Result: " << calculator.getResult() << endl;

    return 0;
}
