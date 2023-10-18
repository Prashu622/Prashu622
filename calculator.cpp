#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num1, num2, result;
    int choice;

    cout << "Scientific Calculator" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Square Root" << endl;
    cout << "6. Sine" << endl;
    cout << "7. Cosine" << endl;
    cout << "8. Logarithm" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 + num2;
            break;
        case 2:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 - num2;
            break;
        case 3:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 * num2;
            break;
        case 4:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero" << endl;
                return 1;
            }
            break;
        case 5:
            cout << "Enter a number: ";
            cin >> num1;
            if (num1 >= 0) {
                result = sqrt(num1);
            } else {
                cout << "Error: Cannot calculate square root of a negative number" << endl;
                return 1;
            }
            break;
        case 6:
            cout << "Enter an angle in degrees: ";
            cin >> num1;
            result = sin(num1 * 3.14159 / 180);
            break;
        case 7:
            cout << "Enter an angle in degrees: ";
            cin >> num1;
            result = cos(num1 * 3.14159 / 180);
            break;
        case 8:
            cout << "Enter a positive number: ";
            cin >> num1;
            if (num1 > 0) {
                result = log(num1);
            } else {
                cout << "Error: Cannot calculate logarithm of a non-positive number" << endl;
                return 1;
            }
            break;
        default:
            cout << "Invalid choice" << endl;
            return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}
