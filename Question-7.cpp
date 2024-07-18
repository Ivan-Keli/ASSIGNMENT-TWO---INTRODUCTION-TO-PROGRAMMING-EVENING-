#include <iostream>
#include <string>

using namespace std;

int main() {
    string bookType;
    int daysLate;
    double fine;

    // Capture book type and number of days late
    cout << "Enter the type of book (regular, children, reference): ";
    cin >> bookType;
    cout << "Enter the number of days late: ";
    cin >> daysLate;

    // Determine the fine amount based on book type and days late
    if (bookType == "regular") {
        if (daysLate <= 0) {
            fine = 0.0;
        } else if (daysLate <= 5) {
            fine = daysLate * 0.50;
        } else if (daysLate <= 10) {
            fine = 5 * 0.50 + (daysLate - 5) * 1.00;
        } else {
            fine = 5 * 0.50 + 5 * 1.00 + (daysLate - 10) * 1.50;
        }
    } else if (bookType == "children") {
        if (daysLate <= 0) {
            fine = 0.0;
        } else if (daysLate <= 5) {
            fine = daysLate * 0.25;
        } else if (daysLate <= 10) {
            fine = 5 * 0.25 + (daysLate - 5) * 0.50;
        } else {
            fine = 5 * 0.25 + 5 * 0.50 + (daysLate - 10) * 1.00;
        }
    } else if (bookType == "reference") {
        if (daysLate <= 0) {
            fine = 0.0;
        } else {
            fine = daysLate * 2.00;
        }
    } else {
        cout << "Invalid book type entered." << endl;
        return 1;
    }

    // Output the fine amount
    cout << "The fine for returning the " << bookType << " book " << daysLate << " days late is $" << fine << endl;

    return 0;
}
