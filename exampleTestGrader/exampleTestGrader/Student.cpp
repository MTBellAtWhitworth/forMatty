#include "Student.h"

Student::Student(int nE)
{
	exams = new Exam[nE];
	numExams = nE;
}

