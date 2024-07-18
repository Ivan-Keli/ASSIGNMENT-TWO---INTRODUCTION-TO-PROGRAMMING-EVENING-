#include <iostream>

using namespace std;

int main() {
    int choice;
    double radius, length, width, base, height, area;
    const double PI = 3.14159;

    while (true) {
        // Display menu
        cout << "Menu:" << endl;
        cout << "1. Calculate the area of a circle" << endl;
        cout << "2. Calculate the area of a rectangle" << endl;
        cout << "3. Calculate the area of a triangle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        // Perform calculation based on user's choice
        switch (choice) {
            case 1:
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                area = PI * radius * radius;
                cout << "The area of the circle is: " << area << endl;
                break;
            case 2:
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                area = length * width;
                cout << "The area of the rectangle is: " << area << endl;
                break;
            case 3:
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                area = 0.5 * base * height;
                cout << "The area of the triangle is: " << area << endl;
                break;
            case 4:
                cout << "Quitting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

        cout << endl; // Add a blank line for better readability
    }

    return 0;
}
