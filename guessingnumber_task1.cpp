#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
int num, guess, attempts = 0;
srand(time(0));
num = rand() % 100 + 1;
cout << "I have picked a number between 1 and 100.\n";
cout << "Can you guess it?\n";
while (true) {
cout << "Enter your guess: ";
cin >> guess;
attempts++;
if (guess == num) {
cout << "You guessed it in " << attempts << " attempts!\n";
break;
}
if (guess < num)
cout << "Too low. Try again\n";
else
cout << "Too high. Try again\n";
}
    return 0;
}

