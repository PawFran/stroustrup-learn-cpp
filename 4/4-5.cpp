#include "../std_lib_facilities.h"

int main() {
    
    double first;
    double second;
    char operand;

    // must be terminated by the user or wrong input
    while (true) {
        cout << "Type two numbers and operand between them (one of + - * /)\n";

        cin >> first;
        cin >> operand;
        cin >> second;

        double result;
        switch (operand) {
            case '+':
                result = first + second;
                break;
            case '-':
                result = first - second;
                break;
            case '*':
                result = first * second;
                break;
            case '/':
                if (second == 0) {
                    cout << "Cannot divide by 0";
                    return 1;
                }
                result = first / second;
                break;
            default:
                cout << "unknown operand!\n";
                return 1;
        }
        cout << "result is : " << result << "\n";
    }
    
    cout << "\npress any key to exit...";
    cin.ignore();
    cin.get();
    return 0;
}
