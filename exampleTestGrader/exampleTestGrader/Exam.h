#ifndef EXAM_H_
#define EXAM_H_
#include<iostream>

class Exam {
private:
	char* Answers;
	int numQuestions;
public:
	Exam() { Answers = NULL; numQuestions = 0; }
	Exam(int numQs);
	void changeAnswer(int AnswerNum, char val);
	char getAnswer(int AnswerNum);
};

#endif