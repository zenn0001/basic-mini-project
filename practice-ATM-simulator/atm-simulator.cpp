#include <iostream>

using namespace std;

int main(){
    int balance = 0;
    int option;
    int deposit; 
    int withdrawal;

    balance = deposit;


    while (true){
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: " << endl;
    cin >> option;

    switch (option){
        case 1: 
        cout << "Your current balance: " << balance << endl;
        break;
        
        case 2: 
        cout << "Enter deposit amount: " << endl;
        cin >> deposit;
        balance += deposit;
        cout << "Deposit successful! Your new balance is: " << balance << endl;
        break;

        case 3: 
        cout << "Enter withdrawal amount: " << endl;
        cin >> withdrawal;
        if (withdrawal > balance){
            cout << "Insuficient balance, your current balance is: " << balance <<endl;
        }
        else {
            balance -= withdrawal;
            cout << "Withdrawal successful! Your new balance is: " << balance << endl;
        }
        break;

        case 4: 
        cout << "exiting..." << endl;
        return 0;

        default:
        cout << "Invalid choice!" << endl;
        break;

    }
}
return 0;
}