#include <iostream>
using namespace std;

int Total_bal = 1000;
int choice, amount;
int pin, flag = 0, Acc_No, Enter_Acc_No, Check_pin;
string Acc_Name;

void Login();
void options();
void deposit();
void credit();
void check_Balance();
void mini_Statement();

void Login() {
    do {
        cout << "Welcome: " << Acc_Name << endl;
        cout << "Enter Your Account Number: ";
        cin >> Enter_Acc_No;
        if (Enter_Acc_No == Acc_No) {
            cout << "Enter Your Pin: ";
            cin >> Check_pin;
            if (Check_pin != pin) {
                flag++;
                cout << "Enter Valid Pin... You have " << 3 - flag << " chances left" << endl;
            } else {
                options();
            }
        }
    } while (flag < 3);
}

void options() {
    do {
        cout << "Enter Your choice \n 1-deposit \n 2-credit \n 3-check_bal \n 4-mini-statement \n 9-for exit \n";
        cin >> choice;
        if (choice == 1) {
            deposit();
        } else if (choice == 2) {
            credit();
        } else if (choice == 3) {
            check_Balance();
        } else if (choice == 4) {
            mini_Statement();
        } else {
            cout << "Invalid input" << endl;
        }
    } while (choice != 9);
}

void deposit() {
    // Implement the deposit function
}

void credit() {
    // Implement the credit function
}

void check_Balance() {
    // Implement the check_Balance function
}

void mini_Statement() {
    // Implement the mini_Statement function
}

int main() {
    Login();
    return 0;
}
