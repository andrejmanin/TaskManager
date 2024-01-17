#include<iostream>
#include <string>
#include <vector>

#include "task.h"

using namespace std;

void show(vector<Task>& t) {
	for(auto el : t)
	{
		cout << el.get() << endl;
	}
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