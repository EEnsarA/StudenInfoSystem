#include "Student.h"

// constructor
Student::Student(int _id, string _name, int _examMarks) {
	id = _id;
	name = _name;
	examMarks = _examMarks;

}
void Student::setId(int _id) {

	id = _id;
}
void Student::setName(string _name) {

	name = _name;
}
void Student::setExamMarks(int _examMarks) {

	examMarks = _examMarks;
}
int Student::getId() {

	return  id;
}
string Student::getName() {
	
	return name;
}
int Student::getExamMarks() {

	return examMarks;
}
void Student::writeInformations() {
	cout << " id: " << id << " name: " << name << " exam mark: " << examMarks <<  endl;

}

