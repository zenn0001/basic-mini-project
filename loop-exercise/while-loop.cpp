#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
    string choices[] = {"tara sex tau...", "hi kamusta!", "pahawak nmn..."};
    int choice;
    bool y = true; 
    char endloop; 

    while (y) {
        cout << "nakita mo si mikaella sa campus, ano ang iyong magiging reaction/sasabihin sakanya?" << endl;

        cout << "tara sex tau[0], hi kamusta![1] pahawak nmn...[2]: " << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 0:
                cout << choices[0] << endl;
                cout << "her response: UGHHHH SHAAN TANGINA MO SHAN" << endl;
                break;
            case 1:
                cout << choices[1] << endl;
                cout << "her response: xyz " << endl;
                break;
            case 2:
                cout << choices[2] << endl;
                cout << "set builder notation." << endl;
                break;
            default:
                cout << "invalid choice" << endl;
                break;
        }

        while (endloop != 'y' && endloop != 'n')
        {
        cout << "Do you want to continue? [y/n]: ";
        cin >> endloop;

        if (endloop == 'n' || endloop == 'N') {
            y = false;
        }

        else {
            y = true;
            cout << "invalid input" << endl;
            cin.clear();
        }
         }
    }

    return 0;
}