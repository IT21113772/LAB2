#include <iostream>
#include <iomanip>

using namespace std;

void findMarks (int t_marks1, int t_marks2, float &t_CA1, float &t_CA2);

int main() {

    int marks1[5], marks2[5];
    float CA1, CA2;

    cout << "Assignment 1 marks out of 100. \n";
    cout << "============================== \n";
    
    for (int i = 0; i < 5; i++){

        cout << "Input mark " << i + 1 << " : ";
        cin >> marks1[i];

    }

    cout << "\nAssignment 2 marks out of 100. \n";
    cout << "============================== \n";

    for (int i = 0; i < 5; i++){

        cout << "Input mark " << i + 1 << " : ";
        cin >> marks2[i];

    }

    cout << "\nStudent\t\tMarks1\t\tMarks2\t\tCA_1\t\tCA_2 \n";

    for (int i = 0; i < 5; i++){

        findMarks(marks1[i], marks2[i], CA1, CA2);

        cout << i + 1 << "\t\t" << marks1[i] << "\t\t" << marks2[i] << "\t\t" << setiosflags(ios :: fixed) << setprecision(2) << CA1 << "\t\t" << setiosflags(ios :: fixed) << setprecision(2) << CA2 << "\n";

    }

    return 0;
}

void findMarks (int t_marks1, int t_marks2, float &t_CA1, float &t_CA2) {

    t_CA1 = t_marks1 * (20 / 100.0);
    t_CA2 = t_marks2 * (30 / 100.0);

}