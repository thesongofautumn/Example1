#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>
using namespace std;

const unsigned count = 5;

struct Assessment{
    int science;
    unsigned mark;
};

struct Student {
    string FIO;
    unsigned numberGradebook;
    Assessment assessment[count];
};

void studentInit(Student& student, string fio, unsigned numberGradebook);
unsigned getNumberGradebook(Student& student);
void setMark(Student& student, int science, unsigned mark);
int checkMarks(Student& student);

#endif
