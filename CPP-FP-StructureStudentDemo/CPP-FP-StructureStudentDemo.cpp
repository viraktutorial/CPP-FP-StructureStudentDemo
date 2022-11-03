// CPP-FP-StructureStudentDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Student.cpp"
using namespace std;


Student inputStudent() {
	Student s;
	cout << "Enter student id: ";
	cin >> s.id;
	cout << "Enter name: ";
	cin >> s.name;
	cout << "Enter sex: ";
	cin >> s.sex;
	return s;
}
void outputStudent(Student s) {
	cout << "ID: " << s.id << endl;
	cout << "Name: " << s.name << endl;
	cout << "Sex:" << s.sex << endl;
}
void addStudent(Student students[], int& count) {
	Student s;
	cout << "\n\n\tAdd Student Information: " << endl;
	s=inputStudent();
	students[count] = s;
	count++;
}

void viewAllStudents(Student students[], int& count) {
	for (int i = 0; i < count; i++) {
		outputStudent(students[i]);
	}
}

void editStudent(Student students[], int& count, int id) {
	bool flag = false;

	for (int i = 0; i < count; i++) {
		if (students[i].id == id) {
			cout << "Enter new name: ";
			cin >> students[i].name;
			flag = true;
			break;
		}

	}
	if (flag == false) {
		cout << "Not found" << endl;
	}
}
void deleteStudent(Student students[], int& count, int id) {
	bool flag = false;
	for (int i = 0; i < count; i++) {
		if (students[i].id == id) {
			for (int j = i; j < count; j++) {
				students[j] = students[j + 1];
			}
			count--;
			flag = true;
			break;
		}

	}
	if (flag == false) {
		cout << "Not found" << endl;
	}

}
int main()
{

    const int SIZE = 100;
	Student students[SIZE];
	int count = 0;
	char ch;
	int id;
	do
	{
		system("cls");
		cout << "\n\n\n\tSTUDNET MENU";
		cout << "\n\n\t01. ADD NEW STUDENT";
		cout << "\n\n\t02. VIEW ALL STUDENT LIST";
		cout << "\n\n\t03. EDIT AN STUDENT";
		cout << "\n\n\t04. DELETE AN STUDENT";
		cout << "\n\n\t00. EXIT";
		cout << "\n\n\tSelect Your Option (0-4) ";
		cin >> ch;
		switch (ch)
		{
		case '1':{
			addStudent(students, count);
			break;
		}
		case '2':
			cout << "\n\n\tView Student Information: " << endl;
			viewAllStudents(students, count);
			break;
		case '3':{
			cout << "\n\n\tEdit Student Information: " << endl;
			cout << "\n\n\tEnter the student id: ";
			cin >> id;
			editStudent(students, count, id);
		}
			break;
		case '4':{
			cout << "\n\n\tDelete Student Information: "<<endl; 
			cout << "\n\n\tEnter The student id. : "; 
			cin >> id;
			deleteStudent(students, count, id);
			break;
		}
		case '0':
			cout << "\n\n\tThanks for using student managemnt system";
			break;
		default:
			cout << "\a";
		}
		cin.ignore();
		cin.get();
	} while (ch != '0');
    
    return 0;
}

