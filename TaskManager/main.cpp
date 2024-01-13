#include<iostream>
#include <string>
#include <vector>

#include "taskClass.h"

using namespace std;

void show(vector<Task>& t) {
	for(auto el : t)
	{
		cout << el.getTask() << endl;
	}
}

int main() {
	vector<Task> tasks;

	string text;
	
	do {

	cout << "Enter a task: ";
	getline(cin, text);
		if (text == "show") {
			show(tasks);
		}
		else {
	Task task(text);
	tasks.push_back(task);
		}
		
	} while (text != "stop");
	

	cout << tasks[0].getTask() << endl;
	return 0;
}