#include<iostream>
#include <string>
#include <vector>

#include "taskClass.h"

using namespace std;


int main() {
	vector<Task> tasks;

	string text;
	cout << "Enter a task: ";
	getline(cin, text);

	Task task(text);
	tasks.push_back(task);

	cout << tasks[0].getTask() << endl;
	return 0;
}