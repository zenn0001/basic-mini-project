#include <iostream>
#include <string>
using namespace std;    

void inputGrades(int grades[], int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        do {
            cout << "Enter grade for student " << i + 1 << " (0-100): ";
            cin >> grades[i];
        } while (grades[i] < 0 || grades[i] > 100); 
    }
}

void displayGrades (int grades[], int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << i + 1<< ": " << grades[i] << endl;
    }
}

void findHighest (int grades[], int numStudents) {
    int highest = grades[0];
    for (int i = 0; i < numStudents; i++) {
        if (grades[i] > highest) {
            highest = grades[i];
        }
    }
    cout << "The highest grade is: " << highest << endl;
}

void findLowest (int grades[], int numStudents) {
    int lowest = grades[0];
    for (int i = 0; i < numStudents; i++) {
        if (grades[i] < lowest) {
            lowest = grades[i];
        }
    }
    cout << "The lowest grade is: " << lowest << endl;
}

void countPassFail (int grades[], int numStudents) {
    int pass = 0;
    int fail = 0;
    for (int i = 0; i < numStudents; i++) {
        if (grades[i] >= 60){
            pass++;
        }
        else {
            fail++;
    }
}

    cout << " " << endl;
    cout << "Passing grade: 60" << endl;
    cout << "Number of students who passed: " << pass << endl;
    cout << "Number of students who failed: " << fail << endl;
}

void sortStudents (int grades[], int numStudents) {
    int temp;
    for (int i = 0; i < numStudents; i++) {
        for (int j = 0; j < numStudents - 1; j++) {
            if (grades[j] < grades[j + 1]) {
                temp = grades[j];
                grades[j] = grades[j + 1];
                grades[j + 1] = temp;
            }
        }
    }
    cout << "Grades in descending order: " << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << grades[i] << endl;
    }
}



int main(){
    int response;
    int numStudents;
    cout << "Enter number of students: ";
    cin >> numStudents;
    int grades[numStudents];

    inputGrades(grades, numStudents);

    do { 
        cout << " " << endl;   
        cout << "--- Student Grade Management System ---" << endl;
        cout << "[1] Display all grades" << endl;
        cout << "[2] Find the highest and lowest grades" << endl;
        cout << "[3] Count passed and failed students" << endl;
        cout << "[4] Sort and display grades in descending order" << endl;
        cout << "[5] exit." << endl;
        cout << "Choose operation to perform: ";
        cin >> response;
        
        if (response == 1){
            displayGrades (grades, numStudents);
        }
        else if (response == 2){
            findHighest (grades, numStudents);
            findLowest (grades, numStudents);

        }

        else if (response == 3) {
            countPassFail (grades, numStudents);
        }

        else if (response == 4){
            sortStudents (grades, numStudents);
        }


        else {
            cout << "Invalid input. Please try again." << endl;
        }



        
    } while (response != 5);

    return 0;
}