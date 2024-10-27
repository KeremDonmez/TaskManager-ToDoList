#include "taskManager.h"
#include <iostream>
#include <algorithm>
#include <fstream>
#include <sstream>

using namespace std;

TaskManager::TaskManager() {
}

void TaskManager::addTask(const Task& task) {
    tasks.push_back(task);
}

void TaskManager::removeTask(int taskIndex) {
    if (taskIndex >= 0 && taskIndex < tasks.size()) {
        tasks.erase(tasks.begin() + taskIndex);
        std::cout << "Task removed.\n";
    } else {
        std::cout << "Invalid task index!\n";
    }
}

void TaskManager::displayTasks() const {
    if (tasks.empty()) {
        std::cout << "Task list is empty.\n";
        return;
    }

    for (size_t i = 0; i < tasks.size(); ++i) {
        std::cout << i + 1 << ". " << tasks[i].getTitle()
                  << " (Priority: " << tasks[i].getPriority()
                  << ", Description: " << tasks[i].getDescription() << ")\n";
    }
}

void TaskManager::updateTask(int taskIndex) {
    if (taskIndex < 0 || taskIndex >= tasks.size()) {
        std::cout << "Invalid task index!\n";
        return;
    }

    std::string newTitle, newDescription;
    int newPriority;

    std::cout << "New Task Title: ";
    std::cin >> newTitle;
    std::cout << "New Description: ";
    std::cin >> newDescription;
    std::cout << "New Priority: ";
    std::cin >> newPriority;

    tasks[taskIndex].setTitle(newTitle);
    tasks[taskIndex].setDescription(newDescription);
    tasks[taskIndex].setPriority(newPriority);
    std::cout << "Task updated.\n";
}

void TaskManager::markTaskAsCompleted(int taskIndex) {
    if (taskIndex >= 0 && taskIndex < tasks.size()) {
        tasks[taskIndex].setPriority(0); // Set priority to 0 for completed tasks
        std::cout << "Task completed: " << tasks[taskIndex].getTitle() << "\n";
    } else {
        std::cout << "Invalid task index!\n";
    }
}
