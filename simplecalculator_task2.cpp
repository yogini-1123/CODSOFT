#include <iostream>
using namespace std;
int main() {
float a, b;
int choice;
cout << "Enter two numbers: ";
cin >> a >> b;
cout << "\nSelect Operation:\n";
cout << "1. Addition\n";
cout << "2. Subtraction\n";
cout << "3. Multiplication\n";
cout << "4. Division\n";
cout << "Enter your choice (1-4): ";
cin >> choice;
switch(choice) {
case 1: cout << "Result = " << a + b; break;
case 2: cout << "Result = " << a - b; break;
case 3: cout << "Result = " << a * b; break;
case 4:
if (b != 0)
cout << "Result = " << a / b;
else
cout << "Error! Division by zero.";
break;
default: cout << "Invalid choice!";
}
return 0;
}

