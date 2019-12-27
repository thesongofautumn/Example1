#include <iostream>
#include "student.h"
using namespace std;

int main() {
    Student petrov;
    Student ivanov;
    studentInit(petrov, "Petrov Petr P", 1234);
    studentInit(ivanov, "Ivanov Ivan I", 1235);
    cout << getNumberGradebook(petrov) << endl;
    cout << getNumberGradebook(ivanov) << endl;
    switch (checkMarks(ivanov)){
        case 0:
            cout << "Оценок нет" << endl;
            break;
        case 1:
            cout << "Есть оценка меньше 4" << endl;
            break;
        case 2:
            cout << "Нет оценок меньше 4" << endl;
            break;
    }
    setMark(petrov, 5, 3);
    setMark(ivanov, 4, 5);
    switch (checkMarks(ivanov)){
        case 0:
            cout << "Оценок нет" << endl;
            break;
        case 1:
            cout << "Есть оценка меньше ++ 4" << endl;
            break;
        case 2:
            cout << "Нет оценок меньше -- 4" << endl;
            break;
    }
    switch (checkMarks(petrov)){
        case 0:
            cout << "Оценок нет" << endl;
            break;
        case 1:
            cout << "Есть оценка меньше ++ 4" << endl;
            break;
        case 2:
            cout << "Нет оценок меньше -- 4" << endl;
            break;
    }
    return 0;
}