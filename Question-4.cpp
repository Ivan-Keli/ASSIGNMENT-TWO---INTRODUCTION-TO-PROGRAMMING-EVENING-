#include <iostream>

using namespace std;

int main() {
    double num1, num2;

    // Capture two numbers from the user
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Determine the maximum number using switch case
    switch (num1 > num2) {
        case true:
            cout << "The maximum number is: " << num1 << endl;
            break;
        case false:
            switch (num1 < num2) {
                case true:
                    cout << "The maximum number is: " << num2 << endl;
                    break;
                case false:
                    cout << "Both numbers are equal: " << num1 << endl;
                    break;
            }
            break;
    }

    return 0;
}
