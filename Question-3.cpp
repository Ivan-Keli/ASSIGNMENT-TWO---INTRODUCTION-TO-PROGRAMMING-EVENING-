#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
    string fullName;
    string course;
    int score;

    // Capture student details
    cout << "Enter full name of the student: ";
    getline(cin, fullName);
    cout << "Enter course: ";
    getline(cin, course);
    cout << "Enter score: ";
    cin >> score;

    // Check if the input is an integer
    if (cin.fail()) {
        cout << "Invalid score" << endl;
        return 0;
    }

    // Determine grade based on score using switch case
    string grade;
    switch (score / 10) {
        case 10:
        case 9:
        case 8:
        case 7:
            grade = "A";
            break;
        case 6:
            grade = "B";
            break;
        case 5:
            grade = "C";
            break;
        case 4:
            grade = "D";
            break;
        case 3:
        case 2:
        case 1:
        case 0:
            grade = "F";
            break;
        default:
            grade = "Invalid score";
            break;
    }

    // Output the result
    cout << "Student: " << fullName << endl;
    cout << "Course: " << course << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
