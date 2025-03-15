#include <iostream>
using namespace std;

int main() {
    int matrix[3][4];
    int sum = 0;

    cout << "Enter elements of the 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matrix[i][j];
            sum += matrix[i][j];
        }
    }

    cout << endl << "The matrix is:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << "Sum of all elements: " << sum << endl;

    return 0;
}
