#include<iostream>
#include "Student.h"
#include <list>
using namespace std;

void showMenu() {
	cout << "                   " << endl;
	cout << "*******************" << endl;
	cout << "*                 *" << endl;
	cout << "*      MENU       *" << endl;
	cout << "*                 *" << endl;
	cout << "*******************" << endl;
	cout << "1. Add new register" << endl;
	cout << "2. Show all list   " << endl;
	cout << "3. Delete register " << endl;
	cout << "4. Search student  " << endl;
	cout << "5. Exit            " << endl;
	cout << "*******************" << endl;
}

void addStudent(list<Student>* lst) {
	int id;
	string name,surname,ad;
	int examMarks;
	cout << "Pls enter a student id: ";
	cin >> id;
	cout << "Enter student name: (name surname)\n";
	cin >> ad >> surname;
	name = ad + " " + surname;
	cout << "Enter exam marks :";
	cin >> examMarks;
	Student std(id, name, examMarks);
	lst->push_back(std);

};
void showList(list<Student>* lst) {
	list<Student>::iterator it;
	cout << endl << "******* All Student List *******\n";
	for (it = lst->begin();it != lst->end();it++){
		it->writeInformations();
	}
	cout << endl;
};
void deleteStudent(list<Student>* lst) {
	int id;
	cout << "******** Delete Register *******" << endl;
	cout << "Pls enter a student id , which you want to delete : ";
	cin >> id;
	list<Student>::iterator it;
	for (it = lst->begin();it != lst->end();it++) {
		if (it->getId() == id)
			break;
	}
    if (it == lst->end()) {
			cout << " This id isnt paired with any students id , pls try again !";
	}
	else
			lst->erase(it);
	}
	

void searchStudent(list<Student>* lst) {
	int id;
	cout << "******** Search Register *******" << endl;
	cout << "Pls enter a student id , which you want to search: ";
	cin >> id;
	list<Student>::iterator it;
	for (it = lst->begin();it != lst->end();it++) {
		if (it->getId() == id)
			break;
	}
	if (it == lst->end()) {
		cout << " This id isnt paired with any students id , pls try again !";
	}
	else {
		cout << "informations about the student you are looking for : \n";
		it->writeInformations();
	}
}


int main() {
	  // int *p = new int[x] ;  yaptýðýmýz aslýnda bu
	list<Student>* pstudentList = new list<Student>(); // pointer ile yer ayýr etme runtime da

	int choose = 0;
	do {
		showMenu();
		cout << "Enter a number (1-5) , which process do you want ? : ";
		cin >> choose;
		if (choose == 1) {
			addStudent(pstudentList); 
		}
		else if (choose == 2) {
			showList(pstudentList);
		}
		else if (choose == 3) {
			deleteStudent(pstudentList);
		}
		else if (choose == 4) {
			searchStudent(pstudentList);
		}
		else if (choose == 5) {
			break;
		}
		else
			cout << " Pls enter a number (1-5) , which process do you want ? \n";
	} while (choose != 5);




	return 0;
}