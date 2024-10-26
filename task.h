#ifndef TASK_H
#define TASK_H


#include <iostream>

using namespace std;


class Task{
    public:
    Task(const string& name,int pritorty,string& description);
    
    string getTitle() const;
    int getPriority() const;
    string getDescription() const;

    void setTitle(const string& title);
    void setPriority(int priority);
    void setDescription(const string& description);

    private:
    string title;
    int priority;   
    string description;
};

#endif
