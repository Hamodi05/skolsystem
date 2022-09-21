#pragma once

#include <iostream>
#include "Student.h"
#include <vector>

class SchoolSystem
{
public:
	void Run();
	void AddStudent();
	void RemoveStudent();
	void Start();
	void AddStudentToClass();

	std::vector<Student> students;
	std::vector<std::string> schoolClasses;

	
};

