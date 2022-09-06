#include "SchoolSystem.h"
#include "Student.h"

void SchoolSystem::Run() 
{
	int counter = 0;
	while (true)
	{
		std::cout << "Loop:" << counter << "\n";
		counter++;
		std::cin.get();

	}
}
void SchoolSystem::AddStudent()
{
	Student student;
	student.name = "blbla";
	student.age = 123;
	students.push_back(student);
}
void SchoolSystem::RemoveStudent()
{
}