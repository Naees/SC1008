#include <iostream>
#include <limits>
using namespace std;

union Result {
    int mark;
    char grade; // Can be only 'A', 'B' or 'C'
};

struct Student {
    char studentName[50];
    bool isGrade;
    int finalMark; // Used to store the final mark
    Result res;

    void convertGrade() { // A=90 , B=80, C=60
        // TO-DO: Write your functions here
        // 
        if (isGrade){
            if (res.grade == 'A' || res.grade == 'a')
            finalMark = 90;
            else if (res.grade == 'A' || res.grade == 'a')
            finalMark = 90;
            else if (res.grade == 'B' || res.grade == 'b')
            finalMark = 80;
            else if (res.grade == 'C' || res.grade == 'c')
            finalMark = 60;
            else 
            finalMark = 0;
        }
        else
        finalMark = res.mark;
    }
};

void displayStudentInfo(Student *students, int count) {
    // TO-DO: Write your functions here
    //
    float avg = 0;
    cout << "Student Results:" << endl;
    for (int i = 0; i < count; i++){
        avg += students[i].finalMark;
        cout << "Name: " << students[i].studentName << ", Final Mark: " << students[i].finalMark << endl;
    }
    cout << "Average Final Mark: " << avg/count;

}

int main() {
    // TO-DO: Write your functions here
    //
    cout << "How many students do you want to input?" << endl;
    cout << "Enter student size: ";
    int size;
    cin >> size;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    Student *student = new (nothrow) Student[size];
    for (int i = 0; i < size; i++){
        cout << "Enter student name: ";
        cin.getline(student[i].studentName, 50);

        char resType;
        cout << "Enter 'G' if result is grade or 'M' if result is mark: ";
        cin >> resType;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (resType == 'G' || resType == 'g'){
            cout << "Enter grade (A,B,C): ";
            student[i].isGrade = true;
            cin >> student[i].res.grade;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if (resType == 'M' || resType == 'm'){
            cout << "Enter mark (0-100): ";
            cin >> student[i].res.mark;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else {
            student[i].isGrade = false;
            student[i].res.mark = 0;
        }
        student[i].convertGrade();
    }

    displayStudentInfo(student, size);

    delete [] student;
    return 0;
}
