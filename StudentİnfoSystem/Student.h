#pragma once
#include<iostream>

using namespace std;

class Student {

private:
	int id;
	string name;
	int examMarks;
public:
	//constructor
	Student(int _id, string _name, int _examMarks);
	void setId(int _id);
	void setName(string _name);
	void setExamMarks(int _examMarks);
	int getId();
	string getName();
	int getExamMarks();
	void writeInformations();
	


};