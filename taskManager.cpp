#include "taskManager.h"
#include <iostream>
#include <algorithm>
#include <fstream>
#include <sstream>

using namespace std;

TaskManager::TaskManager(){
}

void TaskManager::addTask(const Task& task){
    tasks.push_back(task);
}

void TaskManager::removeTask(int taskIndex){
    tasks.erase(tasks.begin() + taskIndex);\
    kerem 
}
