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

    // Determine grade based on score
    string grade;
    if (score >= 70 && score <= 100) {
        grade = "A";
    } else if (score >= 60 && score < 70) {
        grade = "B";
    } else if (score >= 50 && score < 60) {
        grade = "C";
    } else if (score >= 40 && score < 50) {
        grade = "D";
    } else if (score >= 0 && score < 40) {
        grade = "F";
    } else {
        grade = "Invalid score";
    }

    // Output the result
    cout << "Student: " << fullName << endl;
    cout << "Course: " << course << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}

https://github.com/Ivan-Keli/ASSIGNMENT-TWO---INTRODUCTION-TO-PROGRAMMING-EVENING-.git
