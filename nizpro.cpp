#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> tasks;

//ADDTASK FUNCTION

void addTask() {
    string name;

    cout << "Enter Task Name ";
    getline(cin, name);

    tasks.push_back(name);

    cout << "Task Added Successfully\n";
}

//VIEWTASKS FUNCTION

void viewTasks() {

    cout << "\n    YOUR TASKS    \n"<<endl;

    if (tasks.empty()) {
        cout << "No Tasks Available\n";
    }

    for (int i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". " << tasks[i] << endl;
    }
}

//DELETETASK FUNCTION

void deleteTask() {
    int n;

    cout << "Enter Task Number ";
    cin >> n;

    if (n >= 1 && n <= tasks.size()) {
        tasks.erase(tasks.begin() + n - 1);

        cout << "Task Deleted Successfully\n";
    }
    else {
        cout << "Invalid Task Number\n";
    }
}

int main() {

    int choice;

    do {
        cout << "\n    TO-DO LIST    \n";
        cout<<"-------------------------"<<endl;
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Delete Task\n";
        cout << "4. Exit\n"<<endl;

        cout << "Enter Your Choice = ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            addTask();
        }
        else if (choice == 2) {
            viewTasks();
        }
        else if (choice == 3) {
            deleteTask();
        }
        else if (choice == 4) {
            cout << "Thank You Goodbye\n";
        }
        else {
            cout << "Invalid Choice\n";
        }

    } while (choice != 4);

    return 0;
}

