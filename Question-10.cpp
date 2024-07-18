#include <iostream>

using namespace std;

int main() {
    double accountBalance = 1000.00; // Example account balance
    double dailyLimit = 500.00; // Example daily withdrawal limit
    double amountToWithdraw;
    double totalWithdrawnToday = 0.00;

    // Capture the amount to withdraw
    cout << "Enter the amount to withdraw: ";
    cin >> amountToWithdraw;

    // Check if the amount to withdraw exceeds the account balance
    if (amountToWithdraw > accountBalance) {
        cout << "Insufficient funds. Your account balance is $" << accountBalance << endl;
    } else if (amountToWithdraw > dailyLimit) {
        cout << "Transaction exceeds daily withdrawal limit of $" << dailyLimit << endl;
    } else if (totalWithdrawnToday + amountToWithdraw > dailyLimit) {
        cout << "Transaction exceeds remaining daily limit. You can withdraw up to $" << (dailyLimit - totalWithdrawnToday) << " today." << endl;
    } else {
        // Process the withdrawal
        accountBalance -= amountToWithdraw;
        totalWithdrawnToday += amountToWithdraw;
        cout << "Withdrawal successful. Your new account balance is $" << accountBalance << endl;
    }

    return 0;
}
