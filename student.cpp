#include "student.h"

void studentInit(Student& student, string fio, unsigned numberGradebook){
    student.FIO = fio;
    for (int i = 0; i < count; i++){
        student.assessment[i].science = i+1;
        student.assessment[i].mark = 0;
    }
    student.numberGradebook = numberGradebook;
}

unsigned getNumberGradebook(Student& student){
    return student.numberGradebook;
}

void setMark(Student& student, int science, unsigned mark){
    for (int i = 0; i < 5; ++i) {
        if(science == student.assessment[i].science) {
            student.assessment[i].mark = mark;
            return;
        }
    }
}

int checkMarks(Student& student){
    int c = 0;
    for (int i = 0; i < count; i++) {
        if(student.assessment[i].mark == 0)
            c++;
    }
    if (c == count)
        return 0;
    for (int i = 0; i < count; ++i) {
        if (student.assessment[i].mark < 4 && student.assessment[i].mark > 0)
            return 1;
    }
    return 2;
}