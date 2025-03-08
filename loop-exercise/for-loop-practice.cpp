#include <iostream>
using namespace std;

int main() {
    int maxrows = 5;
    string text = "*";


    // uupper part of half triangle
    for (int rows = 1; rows <= maxrows; rows++) {
        for (int col = 1; col <= rows; col++) {
            cout << text;
        }
        cout << endl;
    }


    // lower part of half triangle
    for (int rows = maxrows - 1; rows >=1; rows--) {
        for (int col = 1; col <= rows; col++) {
            cout << text;
        }
        cout << endl;
    }
    return 0;
}