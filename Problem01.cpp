#include <bits/stdc++.h>
using namespace std;

class Calculator {
public:
    double a, b;
    string operation;

    Calculator(double x, double y, string op) {
        a = x;
        b = y;
        operation = op;
    }

    void compute() {
        int res = 0;
        if (operation == "+") {
            res = a + b;
        } else if (operation == "-") {
            res = a - b;
        } else if (operation == "*") {
            res = a * b;
        } else if (operation == "/") {                      // division functionality to handle things in float
            if (b != 0){            
                float result = static_cast<float>(a / b);
                cout << fixed << setprecision(2);
                cout << "Result: " << result << endl;
                return ;
            }
            else cout << "Cannot Divide by Zero." << endl;
        } else {
            cout << "Invalid operation!" << endl;
        }
        cout << "Result : "<<res << endl;
    }
};

int main() {
    double num1, num2;
    string op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter operation (+, -, *, /): ";
    cin >> op;

    Calculator calc(num1, num2, op);
    calc.compute();

    return 0;
}
