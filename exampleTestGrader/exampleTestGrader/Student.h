#ifndef STUDENT_H_
#define STUDENT_H_
#include "Exam.h"

class Student {
private:
	Exam* exams;
	int numExams;
public:
	Student() { exams = NULL; numExams = 0; }
	Student(int);
	//More functions here....
};

#endif