#include <iostream>
#include <string>

using namespace std;

int main() {
    int age;
    string movieType;
    double ticketPrice;

    // Capture customer details
    cout << "Enter the age of the customer: ";
    cin >> age;
    cout << "Enter the type of movie (regular/3D): ";
    cin >> movieType;

    // Determine the ticket price based on age and movie type
    if (movieType == "regular") {
        if (age < 12) {
            ticketPrice = 5.00; // Child price for regular movie
        } else if (age >= 12 && age <= 64) {
            ticketPrice = 10.00; // Adult price for regular movie
        } else {
            ticketPrice = 7.00; // Senior price for regular movie
        }
    } else if (movieType == "3D") {
        if (age < 12) {
            ticketPrice = 8.00; // Child price for 3D movie
        } else if (age >= 12 && age <= 64) {
            ticketPrice = 15.00; // Adult price for 3D movie
        } else {
            ticketPrice = 12.00; // Senior price for 3D movie
        }
    } else {
        cout << "Invalid movie type entered." << endl;
        return 1;
    }

    // Output the ticket price
    cout << "The ticket price for a " << movieType << " movie is $" << ticketPrice << endl;

    return 0;
}
