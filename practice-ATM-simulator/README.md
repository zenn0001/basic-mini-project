# Simple Banking System in C++

## 📌 Description
This is a simple **Banking System** program written in C++ that allows users to perform basic banking operations such as:
- Checking account balance
- Depositing money
- Withdrawing money
- Exiting the program

The program runs in a loop, allowing users to perform multiple transactions until they choose to exit.

---

## 🚀 How It Works
1. The user is presented with a **menu** containing four options:
   - **Check Balance** (Displays the current balance)
   - **Deposit Money** (Allows the user to add funds to their balance)
   - **Withdraw Money** (Allows the user to withdraw money, ensuring sufficient balance)
   - **Exit** (Terminates the program)
2. The user enters their choice, and the program executes the corresponding action.
3. The program continues running until the user selects the **Exit** option.

---

## 🖥️ Usage
1. **Compile the program** using a C++ compiler (e.g., g++):
   ```sh
   g++ banking_system.cpp -o banking_system
   ```
2. **Run the executable**:
   ```sh
   ./banking_system
   ```
3. Follow the on-screen instructions to perform transactions.

---

## ⚡ Example Output
```
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
Enter your choice:
2
Enter deposit amount:
1000
Deposit successful! Your new balance is: 1000

1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
Enter your choice:
3
Enter withdrawal amount:
500
Withdrawal successful! Your new balance is: 500
```

---

## 🛠️ Improvements & Fixes
✅ Fix: Initialize `balance` properly (currently set to `deposit` before deposit is entered)
✅ Add error handling for invalid inputs (non-integer values)
✅ Improve user experience with better prompts and messages

---

## 📜 License
This project is free to use and modify. No official license applied.

---

### 🎯 Happy Coding! 🚀

