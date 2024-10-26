#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <iostream>
#include <vector>
#include "Task.h" 

using namespace std;

class TaskManager {
public:
    TaskManager();
    void addTask(const Task& task);
    void removeTask(int taskIndex);
    void displayTasks() const;
    void updateTask(int taskIndex);
    void markTaskAsCompleted(int taskIndex);
    void sortTasksByPriority();
    void searchTasks(const string& keyword) const;

private:
    vector<Task> tasks; 
    vector<string> categories; 
};
 
#endif
