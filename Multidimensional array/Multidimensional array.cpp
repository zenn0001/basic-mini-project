#include <iostream>
using namespace std;

int main() {
    // 3D array with 2 layers, 3 rows, and 3 columns
    int numbers[2][3][3] = {
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        },
        {
                {10, 11, 12},
                {13, 14, 15},
                {16, 17, 18}
        }
    };

    // Loop through all dimensions
    for (int i = 0; i < 2; i++) { // Layer
        cout << "Layer " << i + 1 << ":\n";
        for (int j = 0; j < 3; j++) { // Row
            for (int k = 0; k < 3; k++) { // Column
                cout << numbers[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}