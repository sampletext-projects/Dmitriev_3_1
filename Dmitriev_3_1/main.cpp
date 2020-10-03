#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class Man
{
	string name;
	int age;
	string gender;
	int weight;
public:
	Man()
	{
		name = "";
		age = 0;
		gender = "";
		weight = 0;
	}

	Man(string& name_, int age_, string& gender_, int weight_)
	{
		name = name_;
		age = age_;
		gender = gender_;
		weight = weight_;
	}

	void set_name(string& name_)
	{
		name = name_;
	}

	void set_age(int age_)
	{
		age = age_;
	}

	void set_weight(int weight_)
	{
		weight = weight_;
	}

	void show()
	{
		cout << "Имя:" << name << endl;
		cout << "Возраст:" << age << endl;
		cout << "Пол:" << gender << endl;
		cout << "Вес:" << weight << endl;
	}
};

class Student : public Man
{
	int yearsOfEducation;
public:
	Student() : Man()
	{
		yearsOfEducation = 0;
	}

	Student(int yearsOfEducation_) : Man()
	{
		yearsOfEducation = yearsOfEducation_;
	}

	void set_years_of_education(int yearsOfEducation_)
	{
		yearsOfEducation = yearsOfEducation_;
	}

	void increase_the_years_of_education(int data)
	{
		yearsOfEducation += data;
	}

	void show()
	{
		cout << "Студенту осталось учиться " << yearsOfEducation << " лет/года" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Man man1;
	man1.show();

	cout << "Введите имя:" << endl;
	string name1;
	cin >> name1;
	cout << "Введите возраст:" << endl;
	int age1;
	cin >> age1;
	cout << "Введите пол:" << endl;
	string gender;
	cin >> gender;
	cout << "Введите вес:" << endl;
	int weight1;
	cin >> weight1;

	Man man2(name1, age1, gender, weight1);
	man2.show();

	string name2;
	int age2;
	int weight2;
	cout << "Изменим параметры второго человека." << endl;

	cout << "Введите новое имя: ";
	cin >> name2;
	man2.set_name(name2);

	cout << "Введите новый возраст: ";
	cin >> age2;
	man2.set_age(age2);

	cout << "Введите новый вес: ";
	cin >> weight2;
	man2.set_weight(weight2);

	man2.show();

	Student student1;
	student1.show();

	int years;
	cout << "Сколько учится новый студент?: ";
	cin >> years;
	Student student2(years);
	student2.show();

	cout << "Насколько увеличить длительность обучения: ";
	cin >> years;
	student2.increase_the_years_of_education(years);
	student2.show();
	
	_getch();
}
