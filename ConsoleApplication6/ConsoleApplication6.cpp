// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector> 
using namespace std;

struct Subject
{
	std::string title;
	int description;
};
struct Student
{
	std::string first_name;
	vector<Subject> subjects;
};

int main()
{
	vector<Student> students;
	string name, title;
	int n, m, descr;
	cout << "Enter number of students: \n";
	cin >> n;
	cout << "Enter number of maps: \n";
	cin >> m;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		Student student;
		cout << endl;
		cout << "Enter name: \n";
		getline(cin, name);
		student.first_name = name;
		for (int j = 0; j < m; j++)
		{
			Subject subject;
			cout << "Enter title of subject: \n";
			getline(cin, title);
			subject.title = title;
			cout << "Enter map: \n";
			cin >> descr;
			subject.description = descr;
			student.subjects.push_back(subject);
			cin.ignore();
		}
		students.push_back(student);
	};
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		cout << students[i].first_name << "\n";
		for (int j = 0; j < m; j++)
		{
			cout << students[i].subjects[j].title << " " << students[i].subjects[j].description << "\n";
		}
		cout << "\n";
	}
	cout << "\n";
	cout << "Enter title of subject for searching: \n";
	string namesh;
	double summa = 0.0;
	int prom;
	cin >> namesh;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (namesh == students[i].subjects[j].title)
			{
				prom = (students[i].subjects[j].description);
				summa += prom;
			}
		}
	}
	cout << "\n";
	cout << summa / n;
	return 0;
}
