#include <iostream>
using namespace std;

int stack[6];
int top = -1;

void push(int stack[], int a, int n)
{
    if (top == n - 1)
    {
        cout << "======================================" << endl;
        cout << "            STACK OVERFLOW" << endl;
        cout << "======================================" << endl;
    }
    else
    {
        top++;
        stack[top] = a;
    }
}

bool isEmpty()
{
    if (top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void pop()
{
    if (isEmpty())
    {
        cout << "======================================" << endl;
        cout << "            STACK UNDERFLOW" << endl;
        cout << "======================================" << endl;
    }
    else
    {
        top--;
    }
}

int size()
{
    return top + 1;
}

int topElement(int stack[])
{
    return stack[top];
}

void display()
{
    if (isEmpty())
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            cout << "| " << stack[i] << " |" << endl;
        }
    }
    cout << endl;
}
int main()
{
    int response;
    int inputPush;

    do
    {
        cout << "Welcome to Stack Operations!\n"
             << endl;

        cout << "[1] Push element to stack.\n";
        cout << "[2] Pop element to stack.\n";
        cout << "[3] Display stack elements.\n";
        cout << "[4] Exit.\n"
             << endl;
        cout << "Choose operation to perform: ";
        cin >> response;

        switch (response)
        {
        case 1:
            cout << "Enter element to push: ";
            cin >> inputPush;
            push(stack, inputPush, 6);
            cout << "Element " << inputPush << " has been entered in the stack." << endl;
            cout << "Current top is " << topElement(stack) << endl
                 << endl;
            break;
        case 2:
            pop();
            cout << "Element has been popped." << endl;
            cout << "Current top is " << topElement(stack) << endl
                 << endl;
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            cout << "Enter a valid value";
            break;
        }

    } while (response != 4);

    return 0;
}