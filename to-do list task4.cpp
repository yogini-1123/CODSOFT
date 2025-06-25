#include <iostream>
#include <string>
using namespace std;
string task[100];
int status[100];
int count = 0;
void addTask() {
if (count < 100) {
cout << "Enter task: ";
cin.ignore();
getline(cin, task[count]);
status[count] = 0;
count++;
cout << "Task added.\n";
} else {
cout << "Task list full.\n";
}
}
void viewTasks() {
if (count == 0) {
cout << "No tasks.\n";
return;
}
for (int i = 0; i < count; i++) {
cout << i + 1 << ". " << task[i];
if (status[i] == 1)
cout << " [Completed]";
else
cout << " [Pending]";
cout << "\n";
}
}
void markCompleted() {
int n;
cout << "Enter task number to mark as completed: ";
cin >> n;
if (n >= 1 && n <= count) {
status[n - 1] = 1;
cout << "Task marked as completed.\n";
} else {
cout << "Invalid task number.\n";
}
}
void deleteTask() {
int n;
cout << "Enter task number to delete: ";
cin >> n;
if (n >= 1 && n <= count) {
for (int i = n - 1; i < count - 1; i++) {
task[i] = task[i + 1];
status[i] = status[i + 1];
}
count--;
cout << "Task deleted.\n";
} else {
cout << "Invalid task number.\n";
}
}
int main() {
int choice;
do {
cout << "\n1. Add Task\n2. View Tasks\n3. Mark Task as Completed\n4. Delete Task\n5. Exit\n";
cout << "Enter choice: ";
cin >> choice;
if (choice == 1) addTask();
else if (choice == 2) viewTasks();
else if (choice == 3) markCompleted();
else if (choice == 4) deleteTask();
else if (choice == 5) cout << "Exiting.\n";
else cout << "Invalid choice.\n";
} while (choice != 5);
return 0;
}



