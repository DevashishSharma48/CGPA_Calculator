#include <iostream>
#include <iomanip> // For setting precision

using namespace std;

// Function to calculate CGPA
float calculateCGPA(int numSubjects) {
    float totalCredits = 0;
    float totalGradePoints = 0;

    for (int i = 1; i <= numSubjects; ++i) {
        float credits, grade;
        cout << "Enter credits for subject " << i << ": ";
        cin >> credits;
        cout << "Enter grade (out of 10) for subject " << i << ": ";
        cin >> grade;

        totalCredits += credits;
        totalGradePoints += (credits * grade);
    }

    return totalGradePoints / totalCredits;
}

int main() {
    int numSubjects;
    cout << "Welcome to the CGPA Calculator!" << endl;
    cout << "How many subjects do you want to calculate for? ";
    cin >> numSubjects;

    float cgpa = calculateCGPA(numSubjects);

    cout << fixed << setprecision(2); // Set precision to 2 decimal places
    cout << "Your CGPA is: " << cgpa << endl;

    return 0;
}
