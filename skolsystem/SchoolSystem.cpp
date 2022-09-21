#include "SchoolSystem.h"
#include "Student.h"
#include <iostream>
#include <string>

void SchoolSystem::Run()
{
	int input = 0;

	std::cout << "Hi there""\n";
	std::cout << "PLease chose one of this options""\n";
	std::cout << "1, To add School Class""\n";
	std::cout << "2, To add students""\n";
	std::cout << "3, To remove stundets""\n";
	std::cout << "4, To add specific student""\n";
	std::cin >> input;

	if (input == 1)
	{
		std::string schoolclass;

		std::cout << "Please type what the name of the class is""\n";
		std::cin >> schoolclass;
		std::cout << "The class name is " << schoolclass << "\n";
		std::cout << "you have created your class now choice what you want to do next""\n";

		std::cin >> input;
	}
	if (input == 2)
	{

		std::cout << "Type how many students you want to add""\n";

		SchoolSystem system;
		system.AddStudent();
	}

	

}

void SchoolSystem::AddStudent()
{
	unsigned size;
	std::cin >> size;

	std::string names;
	new std::string[size];

	std::cout << "name your students""\n";

	for (unsigned i = 0; i < size; i++)
		std::cin >> names[i];
};

void SchoolSystem::RemoveStudent()
{

}

void SchoolSystem::Start()
{
	
}

void SchoolSystem::AddStudentToClass()
{
	std::string name;
	std::string schoolclass;

	std::cin >> name;

	std::cin >> schoolclass;

	for (auto& classes : schoolClasses)
	{
		if (classes != schoolclass) return;
	}

	for (auto& student : students)
	{
		if (student.name == name) student.schoolclass = schoolclass;
	}

}