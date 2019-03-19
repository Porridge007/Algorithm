#pragma once

#include <iostream>
#include <string>
using namespace std;
class Student {
public:
	string name;
	int score;

	bool operator<(const Student &otherStudent) {
		return score < otherStudent.score;
	}

	friend ostream& operator<<(ostream &os, const Student &student) {
		os << "Student: " << student.name << " " << student.score << endl;
		return os;
	}
};