#include <iostream>
using namespace std;

int main()
{
    // Variables for storing scores
    int quiz_1, quiz_2, exam_1, exam_2;
    double average_score;
    char final_grade_letter;

    // Input scores
    cout << "Enter score for Quiz 1: ";
    cin >> quiz_1;
    cout << "Enter score for Quiz 2: ";
    cin >> quiz_2;
    cout << "Enter score for Exam 1: ";
    cin >> exam_1;
    cout << "Enter score for Exam 2: ";
    cin >> exam_2;

    // average score
    average_score = quiz_1 + quiz_2 + exam_1 + exam_2 / 4.0;

    // grade
    if (average_score >= 90)
    {
        final_grade_letter = 'A';
    }
    else if (average_score >= 80)
    {
        final_grade_letter = 'B';
    }
    else if (average_score >= 70)
    {
        final_grade_letter = 'C';
    }
    else if (average_score >= 60)
    {
        final_grade_letter = 'D';
    }
    else
    {
        final_grade_letter = 'F';
    }

    // Output the student's record
    cout << "Quiz 1: " << quiz_1 << "\n";

    cout << "Quiz 2: " << quiz_2 << "\n";

    cout << "Exam 1: " << exam_1 << "\n";

    cout << "Exam 2: " << exam_2 << "\n";

    cout << "Average Score: " << average_score << "\n";

    cout << "Final Grade: " << final_grade_letter << "\n";

    return 0;
}
