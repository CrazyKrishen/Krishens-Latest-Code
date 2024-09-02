#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <cctype>

using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int performOperation(int operand1, int operand2, char operation) {
    switch (operation) {
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            if (operand2 != 0)
                return operand1 / operand2;
            else {
                cout << "Error: Division by zero!" << endl;
                exit(EXIT_FAILURE);
            }
        default:
            return 0; // Should never reach here
    }
}

int evaluatePostfix(const string& expression) {
    stack<int> operands;

    for (char c : expression) {
        if (isdigit(c)) {
            operands.push(c - '0');
        } else if (isOperator(c)) {
            int operand2 = operands.top();
            operands.pop();
            int operand1 = operands.top();
            operands.pop();
            int result = performOperation(operand1, operand2, c);
            operands.push(result);
        }
    }

    return operands.top();
}

int main() {
    string postfixExpression;
    cout << "Enter a postfix expression: ";
    getline(cin, postfixExpression);

    int result = evaluatePostfix(postfixExpression);
    cout << "Result: " << result << endl;

    return 0;
}
