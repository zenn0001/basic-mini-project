#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// parameters
constexpr int numRegions = 3;
constexpr int maxCandidates = 5;

string regions[numRegions] = {
    "NCR", "North Luzon", "Calabarzon"
};

void interface() {
    cout << "=====================================" << endl;
    cout << "COMELECT Candidates vote counter" << endl;
    cout << "====================================" << endl;
    cout << "[1] Display Candidates" << endl;
    cout << "[2] Enter Vote" << endl;
    cout << "[3] Total votes per region" << endl;
    cout << "[4] Candidates total votes" << endl;
    cout << "[5] Display listed regions" << endl;
    cout << "[6] Exit" << endl;
    cout << "====================================" << endl;
    cout << "input: ";
}

void displayCandidates(string candidates[], int numCandidates) {
    cout << "Candidates list: " << endl;
    for (int i = 0; i < numCandidates; i++) {
        cout << "Candidate " << i + 1 << ": " << candidates[i] << endl;
    }
}

void enterVote(int regionalVotes[numRegions][maxCandidates], int numCandidates, string candidates[], string regions[]) {
    for (int i = 0; i < numRegions; i++) {
        cout << "Enter votes for " << regions[i] << ":" << endl;
        for (int j = 0; j < numCandidates; j++) {
            cout << "Votes for " << candidates[j] << ": ";
            cin >> regionalVotes[i][j];
        }
    }
}

void totalVotes(int regionalVotes [numRegions][maxCandidates], int numCandidates, string candidates[], string regions[]) {
    cout << "Total votes per regions: " << endl;
    cout << setw(15)<<  "Regions: ";
    for (int col = 0; col < numCandidates; ++col) {
        cout << setw(15) << candidates[col];
    }
    cout << endl;

    for (int rows = 0; rows < numRegions; rows++) {
      cout << setw(15) << regions[rows];
        for (int col = 0; col < numCandidates; ++col) {
            cout << setw(15) << regionalVotes[rows][col];
        }
        cout << endl;
    }
}

void CandidatesTotalVotes(int regionalVotes [numRegions][maxCandidates], int numCandidates, string candidates[] ) {
    for (int i = 0; i < numCandidates; i++) {
        int total = 0;
        for (int j = 0; j < numCandidates; ++j) {
            total += regionalVotes[i][j];
        }
        cout << "Candidate " << candidates[i] << ": " << total << endl;
    }
}

void displayRegions(string regions[], int numRegions) {
    for (int i = 0; i < numRegions; i++) {
        cout << "Region: " << regions[i] << endl;
    }

}

int main() {
    int numCandidates;
    cout << "Enter number of candidates (MAX OF 5 CANDIDATES ONLY): ";
    cin >> numCandidates;
    if (numCandidates <= 0 || numCandidates > maxCandidates) {
        cout << "Invalid number of candidates!" << endl;
        return 1;
    }

    string candidates[maxCandidates];
    cout << "Enter candidate names: " << endl;
    for (int i = 0; i < numCandidates; i++) {
        cout << "Candidate " << i + 1 << ": ";
        cin >> candidates[i];
    }

    int regionalVotes[numRegions][maxCandidates] = {0};

    int choice;
    do {
        interface();
        cin >> choice;
        switch (choice) {
            case 1:
                displayCandidates(candidates, numCandidates);
                break;

            case 2:
                enterVote(regionalVotes, numCandidates, candidates, regions);
                break;

            case 3:
                totalVotes(regionalVotes, numCandidates, candidates, regions);
            break;

            case 4:
                CandidatesTotalVotes(regionalVotes, numCandidates, candidates);
            break;
            case 5:
                displayRegions(regions, numRegions);
                break;
            case 6:
                cout << "Exiting..." << endl;
            break;
            default:
                cout << "Invalid choice!" << endl;
            break;
        }
    } while (choice != 6);

    return 0;
}
