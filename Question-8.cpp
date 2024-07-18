#include <iostream>

using namespace std;

int main() {
    double purchaseAmount, discount, totalCost;

    // Capture the purchase amount
    cout << "Enter the purchase amount: ";
    cin >> purchaseAmount;

    // Determine the discount based on the purchase amount
    if (purchaseAmount >= 1000) {
        discount = 0.20; // 20% discount
    } else if (purchaseAmount >= 500) {
        discount = 0.10; // 10% discount
    } else if (purchaseAmount >= 100) {
        discount = 0.05; // 5% discount
    } else {
        discount = 0.0; // No discount
    }

    // Calculate the total cost after applying the discount
    totalCost = purchaseAmount - (purchaseAmount * discount);

    // Output the total cost
    cout << "The total cost after applying the discount is: $" << totalCost << endl;

    return 0;
}
