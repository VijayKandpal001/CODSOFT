#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Task {
    string user_entered_data;
    bool completed;
};

vector<Task> taskList;

//Function to add the task.
void addTask() {
    Task newTask;
    cout << "Enter task description: ";
    cin.ignore();
    getline(cin, newTask.user_entered_data);
    newTask.completed = false;
    taskList.push_back(newTask);
    cout << "Task added successfully." << endl;
}

//Function to view the task list.
void viewTasks() {
    cout << "Task List:" << endl;
    for (int i = 0; i < taskList.size(); i++) {
        cout << (i + 1) << ". " << taskList[i].user_entered_data;
        if (taskList[i].completed) {
            cout << " (Completed)";
        } else {
            cout << " (Pending)";
        }
        cout << endl;
    }
}

//Function to mark task as completed.
void markTaskAsCompleted() {
    int taskNumber;
    viewTasks();
    cout << "Enter task number to mark as completed: ";
    cin >> taskNumber;
    if (taskNumber > 0 && taskNumber <= taskList.size()) {
        taskList[taskNumber - 1].completed = true;
        cout << "Task marked as completed!" << endl;
    } else {
        cout << "Invalid task number!" << endl;
    }
}

//Function to delete a task.
void removeTask() {
    int taskNumber;
    viewTasks();
    cout << "Enter task number to remove: ";
    cin >> taskNumber;
    if (taskNumber > 0 && taskNumber <= taskList.size()) {
        taskList.erase(taskList.begin() + (taskNumber - 1));
        cout << "Task removed successfully!" << endl;
    } else {
        cout << "Invalid task number!" << endl;
    }
}

void displayMenu() {

    cout << "1. Add Task" << endl;
    cout << "2. View Tasks" << endl;
    cout << "3. Mark Task as Completed" << endl;
    cout << "4. Remove Task" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    cout<<"/********* TO DO LIST *********/"<<endl;
    int choice;
    while (true) {
        displayMenu();
        cin >> choice;
        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                viewTasks();
                break;
            case 3:
                markTaskAsCompleted();
                break;
            case 4:
                removeTask();
                break;
            case 5:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout <<endl<< "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}