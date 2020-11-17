#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

typedef struct{
	string name;
	string last_name;
	int age;
	double rating;
	char sex;
}student;

typedef struct {
	int age;
	double rating;
	string name;
	string last_name;
	char sex;
}student2;

int main()
{
	student students[30];
	int N = 1;
	cout << "Enter the quantity of students: ";
	cin >> N;
	student* st = new student[N];
	student* p = st;
	student* p1 = students;

	p1->age = 22;
	cout << p1->age << endl;
	p->name = "Johny";
	cout << p->name << endl;

	//Размеры массивов и элеиментов
	cout << "Size of 1 student: " << sizeof(student) << endl;
	cout << "Memory for static array: " << sizeof(students) << endl;
	cout << "Memory for dynamic array: " << sizeof(*st)*N << endl;

	//Итерация по массиву, адреса каждой структуры, шаг
	cout << endl << "FIRST ARRAY: " << endl;
	for (int i = 0; i < 30; i++) {
		cout << "Address of " << i + 1 << "st structure: " << p1 << "; Step: " << sizeof(student) << " bytes." << endl;
		p1++;
	}
	cout << endl << "SECOND ARRAY: " << endl;
	for (int i = 0; i < N; i++) {
		cout << "Address of " << i + 1 << "st structure: " << p << "; Step: " << sizeof(student) << " bytes." << endl;
		p++;
	}

	cout << "Size of student: " << sizeof(student) << endl;
	cout << "Size of student2: " << sizeof(student2) << endl;

	student st1;
	student2 st2;

	cout << "student1: " << &st1.name << " " << &st1.last_name << endl;
	cout << "student2: " << &st2.age << " " << &st2.rating << endl;
}
