#include <iostream>
#include <string>

using namespace std;

int main() {
    int age;
    double bankBalance;
    string crbStatus;
    int monthsAsCustomer;

    // Capture customer details
    cout << "Enter age: ";
    cin >> age;
    if (age <= 22) {
        cout << "Customer is not qualified for a loan: Age must be above 22 years." << endl;
        return 0;
    }

    cout << "Enter bank balance: ";
    cin >> bankBalance;
    if (bankBalance <= 50000) {
        cout << "Customer is not qualified for a loan: Bank balance must be more than 50,000." << endl;
        return 0;
    }

    cout << "Enter CRB status (good/bad): ";
    cin >> crbStatus;
    if (crbStatus != "good") {
        cout << "Customer is not qualified for a loan: CRB status should be good." << endl;
        return 0;
    }

    cout << "Enter number of months as a customer: ";
    cin >> monthsAsCustomer;
    if (monthsAsCustomer <= 6) {
        cout << "Customer is not qualified for a loan: Must have been a customer for more than 6 months." << endl;
        return 0;
    }

    // If all conditions are met
    cout << "Customer is qualified for a loan." << endl;

    return 0;
}
