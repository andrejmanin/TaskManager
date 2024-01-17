#pragma once
#include <iostream>

class Task {
private:
	std::string text;

public:
	Task(std::string text) {
		this->text = text;

	}
	
	std::string get() {
		return text;
	}

	void set(std::string t) {
		text = t;
	}

	~Task() {
		text = "";
	}
};