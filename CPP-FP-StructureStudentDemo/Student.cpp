#include <iostream>
using namespace std;
class Student {
public:
	int id;
	string name;
	string sex;
	Student() {
		id = 0;
		name = "unknown";
		sex = "unknown";
	}
	Student(int id, string name, string sex) {
		this->id = id;
		this->name = name;
		this->sex = sex;
	}
	void input() {
		cout << "Enter student id: ";
		cin >> id;
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter sex: ";
		cin >> sex;
	}
	void output() {
		cout << "ID: " << id << endl;
		cout << "Name: " << name << endl;
		cout << "Sex:" << sex << endl;
	}
};