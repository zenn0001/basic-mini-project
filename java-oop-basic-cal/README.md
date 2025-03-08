# Simple Banking System & Basic Calculator in C++ and Java

## 📌 Description
This repository contains two simple programs:

### 1️⃣ **Banking System (C++)**
A simple **Banking System** written in C++ that allows users to perform basic banking operations such as:
- Checking account balance
- Depositing money
- Withdrawing money
- Exiting the program

The program runs in a loop, allowing users to perform multiple transactions until they choose to exit.

### 2️⃣ **Basic Calculator (Java)**
A **console-based calculator** written in Java that allows users to perform basic arithmetic operations:
- Addition
- Subtraction
- Multiplication
- Division

The program prompts the user to **select an operation** and executes the corresponding calculation.

---

## 🚀 How It Works
### 🏦 Banking System (C++)
1. The user is presented with a **menu** containing four options:
   - **Check Balance** (Displays the current balance)
   - **Deposit Money** (Allows the user to add funds to their balance)
   - **Withdraw Money** (Allows the user to withdraw money, ensuring sufficient balance)
   - **Exit** (Terminates the program)
2. The user enters their choice, and the program executes the corresponding action.
3. The program continues running until the user selects the **Exit** option.

### 🖩 Basic Calculator (Java)
1. The program **displays a menu** with four options:
   - **1. Addition**
   - **2. Subtraction**
   - **3. Multiplication**
   - **4. Division**
2. The user enters their **choice (1-4)**.
3. The program calls the appropriate method (`addNumbers()`, `minusNumbers()`, `multiply()`, `divideNumbers()`).
4. The calculation is performed, and the result is displayed.
5. The program terminates after displaying the result.

---

## 🖥️ Usage
### Banking System (C++)
1. **Compile the program** using a C++ compiler (e.g., g++):
   ```sh
   g++ banking_system.cpp -o banking_system
   ```
2. **Run the executable**:
   ```sh
   ./banking_system
   ```
3. Follow the on-screen instructions to perform transactions.

### Basic Calculator (Java)
1. **Compile the program**:
   ```sh
   javac Main.java
   ```
2. **Run the program**:
   ```sh
   java Main
   ```
3. Follow the on-screen prompts to select an operation and enter numbers.

---

## ⚡ Example Output
### Banking System (C++)
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
```

### Basic Calculator (Java)
```
BASIC CALCULATOR
1. Addition
2. Subtraction
3. Multiplication
4. Division
Choose: 1
Enter first number: 5
Enter second number: 10
Result: 15
```

---
