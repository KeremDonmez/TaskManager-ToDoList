#include "task.h"
#include <iostream>

using namespace std;

Task::Task(const string& name,int pritorty,string& description):
    title(name),priority(pritorty),description(description){}

//Getters
string Task::getTitle()const{
    return title;
}
  
int Task::getPriority()const{
    return priority;
}

string Task::getDescription()const{
    return description;
}   

//Setters 

void Task::setTitle(const string& newTitle){
    title=newTitle;
}

void Task::setPriority(int newPriority){
    title=newPriority;
}

void Task::setDescription(const string& newDescription){
    title=newDescription;
}