#include <iostream>
using namespace std;

int main()
{
    int choice;
    double num1, num2;

    while (true)
    {
        cout << "\n===================================";
        cout << "\n      ARITHMETIC CALCULATOR";
        cout << "\n===================================";
        cout << "\n1. Addition";
        cout << "\n2. Subtraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Division";
        cout << "\n5. Modulus";
        cout << "\n6. Exit";

        cout << "\n\nEnter your choice: ";
        cin >> choice;

        if (choice == 6)
        {
            cout << "\nThank you for using the Calculator!";
            break;
        }

        if (choice < 1 || choice > 6)
        {
            cout << "\nInvalid choice! Please try again.\n";
            continue;
        }

        cout << "\nEnter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        switch (choice)
        {
            case 1:
                cout << "\nResult = " << num1 + num2;
                break;

            case 2:
                cout << "\nResult = " << num1 - num2;
                break;

            case 3:
                cout << "\nResult = " << num1 * num2;
                break;

            case 4:
                if (num2 == 0)
                    cout << "\nError! Division by zero is not allowed.";
                else
                    cout << "\nResult = " << num1 / num2;
                break;

            case 5:
                if ((int)num2 == 0)
                    cout << "\nError! Modulus by zero is not allowed.";
                else
                    cout << "\nResult = " << (int)num1 % (int)num2;
                break;
        }

        cout << "\n";
    }

    return 0;
}
